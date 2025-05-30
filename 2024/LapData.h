struct LapData
{
    uint32   m_lastLapTimeInMS;	       	 // Last lap time in milliseconds
    uint32   m_currentLapTimeInMS; 	 // Current time around the lap in milliseconds
    uint16   m_sector1TimeMSPart;         // Sector 1 time milliseconds part
    uint8    m_sector1TimeMinutesPart;    // Sector 1 whole minute part
    uint16   m_sector2TimeMSPart;         // Sector 2 time milliseconds part
    uint8    m_sector2TimeMinutesPart;    // Sector 2 whole minute part
    uint16   m_deltaToCarInFrontMSPart;   // Time delta to car in front milliseconds part
    uint8    m_deltaToCarInFrontMinutesPart; // Time delta to car in front whole minute part
    uint16   m_deltaToRaceLeaderMSPart;      // Time delta to race leader milliseconds part
    uint8    m_deltaToRaceLeaderMinutesPart; // Time delta to race leader whole minute part
    float    m_lapDistance;		 // Distance vehicle is around current lap in metres – could
					 // be negative if line hasn’t been crossed yet
    float    m_totalDistance;		 // Total distance travelled in session in metres – could
					 // be negative if line hasn’t been crossed yet
    float    m_safetyCarDelta;            // Delta in seconds for safety car
    uint8    m_carPosition;   	         // Car race position
    uint8    m_currentLapNum;		 // Current lap number
    uint8    m_pitStatus;            	 // 0 = none, 1 = pitting, 2 = in pit area
    uint8    m_numPitStops;            	 // Number of pit stops taken in this race
    uint8    m_sector;               	 // 0 = sector1, 1 = sector2, 2 = sector3
    uint8    m_currentLapInvalid;    	 // Current lap invalid - 0 = valid, 1 = invalid
    uint8    m_penalties;            	 // Accumulated time penalties in seconds to be added
    uint8    m_totalWarnings;             // Accumulated number of warnings issued
    uint8    m_cornerCuttingWarnings;     // Accumulated number of corner cutting warnings issued
    uint8    m_numUnservedDriveThroughPens;  // Num drive through pens left to serve
    uint8    m_numUnservedStopGoPens;        // Num stop go pens left to serve
    uint8    m_gridPosition;         	 // Grid position the vehicle started the race in
    uint8    m_driverStatus;         	 // Status of driver - 0 = in garage, 1 = flying lap
                                          // 2 = in lap, 3 = out lap, 4 = on track
    uint8    m_resultStatus;              // Result status - 0 = invalid, 1 = inactive, 2 = active
                                          // 3 = finished, 4 = didnotfinish, 5 = disqualified
                                          // 6 = not classified, 7 = retired
    uint8    m_pitLaneTimerActive;     	 // Pit lane timing, 0 = inactive, 1 = active
    uint16   m_pitLaneTimeInLaneInMS;   	 // If active, the current time spent in the pit lane in ms
    uint16   m_pitStopTimerInMS;        	 // Time of the actual pit stop in ms
    uint8    m_pitStopShouldServePen;   	 // Whether the car should serve a penalty at this stop
    float    m_speedTrapFastestSpeed;     // Fastest speed through speed trap for this car in kmph
    uint8    m_speedTrapFastestLap;       // Lap no the fastest speed was achieved, 255 = not set
};
