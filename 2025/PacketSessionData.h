struct PacketSessionData
{
 PacketHeader m_header; // Header
 uint8 m_weather; // Weather - 0 = clear, 1 = light cloud, 2 = overcast
 // 3 = light rain, 4 = heavy rain, 5 = storm
 int8 m_trackTemperature; // Track temp. in degrees celsius
 int8 m_airTemperature; // Air temp. in degrees celsius
 uint8 m_totalLaps; // Total number of laps in this race
 uint16 m_trackLength; // Track length in metres
 uint8 m_sessionType; // 0 = unknown, see appendix
 int8 m_trackId; // -1 for unknown, see appendix
 uint8 m_formula; // Formula, 0 = F1 Modern, 1 = F1 Classic, 2 = F2,
 // 3 = F1 Generic, 4 = Beta, 6 = Esports
// 8 = F1 World, 9 = F1 Elimination
 uint16 m_sessionTimeLeft; // Time left in session in seconds
 uint16 m_sessionDuration; // Session duration in seconds
 uint8 m_pitSpeedLimit; // Pit speed limit in kilometres per hour
 uint8 m_gamePaused; // Whether the game is paused – network game only
 uint8 m_isSpectating; // Whether the player is spectating
 uint8 m_spectatorCarIndex; // Index of the car being spectated
 uint8 m_sliProNativeSupport; // SLI Pro support, 0 = inactive, 1 = active
 uint8 m_numMarshalZones; // Number of marshal zones to follow
 MarshalZone m_marshalZones[21]; // List of marshal zones – max 21
 uint8 m_safetyCarStatus; // 0 = no safety car, 1 = full
 // 2 = virtual, 3 = formation lap
 uint8 m_networkGame; // 0 = offline, 1 = online
 uint8 m_numWeatherForecastSamples; // Number of weather samples to follow
 WeatherForecastSample m_weatherForecastSamples[64]; // Array of weather forecast samples
 uint8 m_forecastAccuracy; // 0 = Perfect, 1 = Approximate
 uint8 m_aiDifficulty; // AI Difficulty rating – 0-110
 uint32 m_seasonLinkIdentifier; // Identifier for season - persists across saves
 uint32 m_weekendLinkIdentifier; // Identifier for weekend - persists across saves
 uint32 m_sessionLinkIdentifier; // Identifier for session - persists across saves
 uint8 m_pitStopWindowIdealLap; // Ideal lap to pit on for current strategy (player)
 uint8 m_pitStopWindowLatestLap; // Latest lap to pit on for current strategy (player)
 uint8 m_pitStopRejoinPosition; // Predicted position to rejoin at (player)
 uint8 m_steeringAssist; // 0 = off, 1 = on
 uint8 m_brakingAssist; // 0 = off, 1 = low, 2 = medium, 3 = high
 uint8 m_gearboxAssist; // 1 = manual, 2 = manual & suggested gear, 3 = auto
 uint8 m_pitAssist; // 0 = off, 1 = on
 uint8 m_pitReleaseAssist; // 0 = off, 1 = on
 uint8 m_ERSAssist; // 0 = off, 1 = on
 uint8 m_DRSAssist; // 0 = off, 1 = on
 uint8 m_dynamicRacingLine; // 0 = off, 1 = corners only, 2 = full
 uint8 m_dynamicRacingLineType; // 0 = 2D, 1 = 3D
 uint8 m_gameMode; // Game mode id - see appendix
 uint8 m_ruleSet; // Ruleset - see appendix
 uint32 m_timeOfDay; // Local time of day - minutes since midnight
 uint8 m_sessionLength; // 0 = None, 2 = Very Short, 3 = Short, 4 = Medium
// 5 = Medium Long, 6 = Long, 7 = Full
 uint8 m_speedUnitsLeadPlayer; // 0 = MPH, 1 = KPH
 uint8 m_temperatureUnitsLeadPlayer; // 0 = Celsius, 1 = Fahrenheit
 uint8 m_speedUnitsSecondaryPlayer; // 0 = MPH, 1 = KPH
 uint8 m_temperatureUnitsSecondaryPlayer; // 0 = Celsius, 1 = Fahrenheit
 uint8 m_numSafetyCarPeriods; // Number of safety cars called during session
 uint8 m_numVirtualSafetyCarPeriods; // Number of virtual safety cars called
 uint8 m_numRedFlagPeriods; // Number of red flags called during session
 uint8 m_equalCarPerformance; // 0 = Off, 1 = On
 uint8 m_recoveryMode; // 0 = None, 1 = Flashbacks, 2 = Auto-recovery
 uint8 m_flashbackLimit; // 0 = Low, 1 = Medium, 2 = High, 3 = Unlimited
 uint8 m_surfaceType; // 0 = Simplified, 1 = Realistic
 uint8 m_lowFuelMode; // 0 = Easy, 1 = Hard
 uint8 m_raceStarts; // 0 = Manual, 1 = Assisted
 uint8 m_tyreTemperature; // 0 = Surface only, 1 = Surface & Carcass
 uint8 m_pitLaneTyreSim; // 0 = On, 1 = Off
 uint8 m_carDamage; // 0 = Off, 1 = Reduced, 2 = Standard, 3 = Simulation
 uint8 m_carDamageRate; // 0 = Reduced, 1 = Standard, 2 = Simulation
 uint8 m_collisions; // 0 = Off, 1 = Player-to-Player Off, 2 = On
 uint8 m_collisionsOffForFirstLapOnly; // 0 = Disabled, 1 = Enabled
 uint8 m_mpUnsafePitRelease; // 0 = On, 1 = Off (Multiplayer)
 uint8 m_mpOffForGriefing; // 0 = Disabled, 1 = Enabled (Multiplayer)
 uint8 m_cornerCuttingStringency; // 0 = Regular, 1 = Strict
 uint8 m_parcFermeRules; // 0 = Off, 1 = On
 uint8 m_pitStopExperience; // 0 = Automatic, 1 = Broadcast, 2 = Immersive
 uint8 m_safetyCar; // 0 = Off, 1 = Reduced, 2 = Standard, 3 = Increased
 uint8 m_safetyCarExperience; // 0 = Broadcast, 1 = Immersive
 uint8 m_formationLap; // 0 = Off, 1 = On
 uint8 m_formationLapExperience; // 0 = Broadcast, 1 = Immersive
 uint8 m_redFlags; // 0 = Off, 1 = Reduced, 2 = Standard, 3 = Increased
 uint8 m_affectsLicenceLevelSolo; // 0 = Off, 1 = On
 uint8 m_affectsLicenceLevelMP; // 0 = Off, 1 = On
 uint8 m_numSessionsInWeekend; // Number of session in following array
 uint8 m_weekendStructure[12]; // List of session types to show weekend
 // structure - see appendix for types
 float m_sector2LapDistanceStart; // Distance in m around track where sector 2 starts
 float m_sector3LapDistanceStart; // Distance in m around track where sector 3 starts
};
