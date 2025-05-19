struct PacketCarSetupData
{
    PacketHeader    m_header;            // Header

    CarSetupData    m_carSetups[22];

    float         m_nextFrontWingValue;	// Value of front wing after next pit stop - player only
};
