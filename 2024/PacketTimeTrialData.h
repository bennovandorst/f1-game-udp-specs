struct PacketTimeTrialData
{
    PacketHeader    m_header;               	// Header

    TimeTrialDataSet    m_playerSessionBestDataSet;     // Player session best data set
    TimeTrialDataSet    m_personalBestDataSet;          // Personal best data set
    TimeTrialDataSet    m_rivalDataSet;                 // Rival data set
};
