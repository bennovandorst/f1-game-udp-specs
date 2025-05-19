// The event details packet is different for each type of event.
// Make sure only the correct type is interpreted.
union EventDataDetails
{
    struct
    {
        uint8	vehicleIdx; // Vehicle index of car achieving fastest lap
        float	lapTime;    // Lap time is in seconds
    } FastestLap;

    struct
    {
        uint8   vehicleIdx; // Vehicle index of car retiring
    } Retirement;

    struct
    {
        uint8   vehicleIdx; // Vehicle index of team mate
    } TeamMateInPits;

    struct
    {
        uint8   vehicleIdx; // Vehicle index of the race winner
    } RaceWinner;

    struct
    {
    	uint8 penaltyType;		// Penalty type – see Appendices
        uint8 infringementType;		// Infringement type – see Appendices
        uint8 vehicleIdx;         	// Vehicle index of the car the penalty is applied to
        uint8 otherVehicleIdx;    	// Vehicle index of the other car involved
        uint8 time;               	// Time gained, or time spent doing action in seconds
        uint8 lapNum;             	// Lap the penalty occurred on
        uint8 placesGained;       	// Number of places gained by this
    } Penalty;

    struct
    {
        uint8 vehicleIdx;		// Vehicle index of the vehicle triggering speed trap
        float speed;      		// Top speed achieved in kilometres per hour
        uint8 isOverallFastestInSession; // Overall fastest speed in session = 1, otherwise 0
        uint8 isDriverFastestInSession;  // Fastest speed for driver in session = 1, otherwise 0
        uint8 fastestVehicleIdxInSession;// Vehicle index of the vehicle that is the fastest
// in this session
        float fastestSpeedInSession;      // Speed of the vehicle that is the fastest
 // in this session
    } SpeedTrap;

    struct
    {
        uint8 numLights;			// Number of lights showing
    } StartLIghts;

    struct
    {
        uint8 vehicleIdx;                 // Vehicle index of the vehicle serving drive through
    } DriveThroughPenaltyServed;

    struct
    {
        uint8 vehicleIdx;                 // Vehicle index of the vehicle serving stop go
    } StopGoPenaltyServed;

    struct
    {
        uint32 flashbackFrameIdentifier;  // Frame identifier flashed back to
        float flashbackSessionTime;       // Session time flashed back to
    } Flashback;

    struct
    {
        uint32 buttonStatus;              // Bit flags specifying which buttons are being pressed
                                          // currently - see appendices
    } Buttons;

    struct
    {
        uint8 overtakingVehicleIdx;       // Vehicle index of the vehicle overtaking
        uint8 beingOvertakenVehicleIdx;   // Vehicle index of the vehicle being overtaken
    } Overtake;

    struct
    {
        uint8 safetyCarType;              // 0 = No Safety Car, 1 = Full Safety Car
                                          // 2 = Virtual Safety Car, 3 = Formation Lap Safety Car
        uint8 eventType;                  // 0 = Deployed, 1 = Returning, 2 = Returned
                                          // 3 = Resume Race
    } SafetyCar;

    struct
    {
        uint8 vehicle1Idx;            // Vehicle index of the first vehicle involved in the collision
        uint8 vehicle2Idx;            // Vehicle index of the second vehicle involved in the collision
    } Collision;
};
