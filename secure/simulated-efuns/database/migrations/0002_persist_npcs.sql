CREATE TABLE `npcs` (
  `playerid` int(11) NOT NULL,
  `fileName` varchar(256) NOT NULL,
  `data` blob NOT NULL,
  `inParty` tinyint NOT NULL DEFAULT '0',
  KEY `npcs_playerid_idx` (`playerid`),
  CONSTRAINT `npcs_playerid` FOREIGN KEY (`playerid`) REFERENCES `players` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
##
CREATE PROCEDURE `saveNPCData` (p_playerid int,
p_filename varchar(256), p_data blob, p_inParty int)
BEGIN
    declare alreadyPersisted int;

    select playerid into alreadyPersisted
    from npcs 
    where playerid = p_playerid and filename = p_filename;
    
    if alreadyPersisted is not null then
        update npcs set data = p_data, inParty = p_inParty
        where playerid = p_playerid and filename = p_filename;
    else
        insert into npcs (playerid,filename,data,inParty) 
            values (p_playerid,p_filename,p_data,p_inParty);
    end if;
END;
##