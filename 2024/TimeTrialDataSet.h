struct TimeTrialDataSet
{
    uint8     m_carIdx;                   // Index of the car this data relates to
    uint8     m_teamId;                   // Team id - see appendix
    uint32    m_lapTimeInMS;              // Lap time in milliseconds
    uint32    m_sector1TimeInMS;          // Sector 1 time in milliseconds
    uint32    m_sector2TimeInMS;          // Sector 2 time in milliseconds
    uint32    m_sector3TimeInMS;          // Sector 3 time in milliseconds
    uint8     m_tractionControl;          // 0 = off, 1 = medium, 2 = full
    uint8     m_gearboxAssist;            // 1 = manual, 2 = manual & suggested gear, 3 = auto
    uint8     m_antiLockBrakes;           // 0 (off) - 1 (on)
    uint8     m_equalCarPerformance;      // 0 = Realistic, 1 = Equal
    uint8     m_customSetup;              // 0 = No, 1 = Yes
    uint8     m_valid;                    // 0 = invalid, 1 = valid
};
