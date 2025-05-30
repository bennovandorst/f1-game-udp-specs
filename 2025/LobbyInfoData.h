struct LobbyInfoData
{
 uint8 m_aiControlled; // Whether the vehicle is AI (1) or Human (0) controlled
 uint8 m_teamId; // Team id - see appendix (255 if no team currently selected)
 uint8 m_nationality; // Nationality of the driver
 uint8 m_platform; // 1 = Steam, 3 = PlayStation, 4 = Xbox, 6 = Origin, 255 = unknown
 char m_name[32]; // Name of participant in UTF-8 format – null terminated
 // Will be truncated with ... (U+2026) if too long
 uint8 m_carNumber; // Car number of the player
 uint8 m_yourTelemetry; // The player's UDP setting, 0 = restricted, 1 = public
 uint8 m_showOnlineNames; // The player's show online names setting, 0 = off, 1 = on
 uint16 m_techLevel; // F1 World tech level
 uint8 m_readyStatus; // 0 = not ready, 1 = ready, 2 = spectating
};
