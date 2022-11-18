// Object: ValidAgainst
// RuntimeId: 56358
// TypeInfo: 0x0000000144C04970

namespace BattleAIShared {
    enum ValidAgainst {
        ValidAgainst_Nothing = 0,
        ValidAgainst_All = 1,
        ValidAgainst_Soldiers = 2,
        ValidAgainst_HumanSoldiers = 3,
        ValidAgainst_StationaryVehicles = 4,
        ValidAgainst_UnshieldedVehicles = 5,
        ValidAgainst_ShieldedVehicles = 6,
        ValidAgainst_AllVehicles = 7,
        ValidAgainst_SoldiersAndStationaryVehicles = 8,
        ValidAgainst_SoldiersAndUnshieldedVehicles = 9,
        ValidAgainst_StationaryVehiclesAndUnshieldedVehicles = 10,
        ValidAgainst_UnshieldedVehiclesAndShieldedVehicles = 11,
        ValidAgainst_SoldiersAndStationaryVehiclesAndUnshieldedVehicles = 12
    };
}