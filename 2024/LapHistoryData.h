struct LapHistoryData
{
    uint32    m_lapTimeInMS;           // Lap time in milliseconds
    uint16    m_sector1TimeMSPart;        // Sector 1 milliseconds part
    uint8     m_sector1TimeMinutesPart;   // Sector 1 whole minute part
    uint16    m_sector2TimeMSPart;        // Sector 2 time milliseconds part
    uint8     m_sector2TimeMinutesPart;   // Sector 2 whole minute part
    uint16    m_sector3TimeMSPart;        // Sector 3 time milliseconds part
    uint8     m_sector3TimeMinutesPart;   // Sector 3 whole minute part
    uint8     m_lapValidBitFlags;      // 0x01 bit set-lap valid,      0x02 bit set-sector 1 valid
                                       // 0x04 bit set-sector 2 valid, 0x08 bit set-sector 3 valid
};
