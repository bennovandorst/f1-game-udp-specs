struct PacketLapPositionsData
{
 PacketHeader m_header; // Header
 // Packet specific data
 uint8 m_numLaps; // Number of laps in the data
 uint8 m_lapStart; // Index of the lap where the data starts, 0 indexed
 // Array holding the position of the car in a given lap, 0 if no record
 uint8 m_positionForVehicleIdx[50][cs_maxNumCarsInUDPData];
};
