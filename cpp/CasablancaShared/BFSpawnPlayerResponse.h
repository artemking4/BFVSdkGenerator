// Object: BFSpawnPlayerResponse
// RuntimeId: 6600
// TypeInfo: 0x0000000144D4CE30

namespace CasablancaShared {
    enum BFSpawnPlayerResponse {
        BFSpawnPlayerResponse_Success = 0,
        BFSpawnPlayerResponse_NoRoomForSpawn = 1,
        BFSpawnPlayerResponse_PlayerSpawnDisabled = 2,
        BFSpawnPlayerResponse_SpawnPointNotFound = 3,
        BFSpawnPlayerResponse_InvalidSpawnPoint = 4,
        BFSpawnPlayerResponse_InvalidPlayerKit = 5,
        BFSpawnPlayerResponse_OutOfCombat = 6,
        BFSpawnPlayerResponse_NoSeatAvailable = 7,
        BFSpawnPlayerResponse_CouldNotCreateControllable = 8,
        BFSpawnPlayerResponse_NondescriptFailed = 9,
        BFSpawnPlayerResponse_NotAllowedToDeploy = 10,
        BFSpawnPlayerResponse_InterruptedByTeamSwitch = 11,
        BFSpawnPlayerResponse_InvalidPlayerRoster = 12,
        BFSpawnPlayerResponse_NoInventory = 13,
        BFSpawnPlayerResponse_InCombat = 14,
        BFSpawnPlayerResponse_Retreating = 15
    };
}