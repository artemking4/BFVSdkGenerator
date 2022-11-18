// Object: SquadCommandResponseCode
// RuntimeId: 64110
// TypeInfo: 0x0000000144D35F30

namespace CasablancaShared {
    enum SquadCommandResponseCode {
        SquadCommandResponseCode_Success = 0,
        SquadCommandResponseCode_UserCancelled = 1,
        SquadCommandResponseCode_TooManyInUseTotal = 2,
        SquadCommandResponseCode_TooManyInUseTeam = 3,
        SquadCommandResponseCode_TooManyInUseSquad = 4,
        SquadCommandResponseCode_NotEnoughCredits = 5,
        SquadCommandResponseCode_InvalidItem = 6,
        SquadCommandResponseCode_InvalidSquadId = 7,
        SquadCommandResponseCode_Count = 8
    };
}