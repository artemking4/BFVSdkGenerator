// Object: GameOwnershipType
// RuntimeId: 49222
// TypeInfo: 0x0000000144D49A00

namespace CasablancaShared {
    enum GameOwnershipType {
        NONE = 0,
        TRIAL_CONTENT_RESTRICTED = 1,
        TRIAL_TIME_RESTRICTED = 2,
        IS_TRIAL = 3,
        IS_FULL_GAME = 4,
        FULL_GAME_DISC_INSERTED = 5,
        FULL_GAME_DLC = 6,
        FULL_GAME_LICENSE = 7,
        NUM_GAMEOWNERSHIPTYPE_ENUM = 8
    };
}