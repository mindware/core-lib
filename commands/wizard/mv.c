//*****************************************************************************
// Copyright (c) 2018 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/commands/baseCommand.c";

/////////////////////////////////////////////////////////////////////////////
public nomask void reset(int arg)
{
    if (!arg)
    {
        addCommandTemplate("mv [##Target##] [##Destination##]");
    }
}

/////////////////////////////////////////////////////////////////////////////
public nomask int execute(string command, object initiator)
{
    int ret = 1;

    if (canExecuteCommand(command) && initiator->hasExecuteAccess("mv"))
    {
        string source = regreplace(command, "^mv ([^ ]+) .*", "\\1");
        string destination = regreplace(command, "^mv [^ ]+ (.*)", "\\1");

        if (initiator->hasWriteAccess(source) &&
            initiator->hasWriteAccess(destination))
        {
            if (file_size(source) != -1)
            {
                ret = (rename(source, destination) == 0);
            }
            else
            {
                raise_error(sprintf("The file '%s' does not exist.",
                    source));
            }
        }
        else
        {
            raise_error(sprintf("You do not have write access to "
                "both '%s' and '%s'", source, destination));
        }
    }
    return ret;
}
