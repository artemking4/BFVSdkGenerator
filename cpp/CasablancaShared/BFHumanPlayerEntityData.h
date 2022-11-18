// Object: BFHumanPlayerEntityData
// ClassId: 2798
// RuntimeId: 61471
// TypeInfo: 0x0000000144D4BC70
#include "../GameShared/HumanPlayerEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFHumanPlayerEntityData : public GameShared::HumanPlayerEntityData {
        Float32 PlayerSpawnProtectedDuration; // 0x38
        Float32 Team1KilledDelayModifier; // 0x3C
        Float32 Team2KilledDelayModifier; // 0x40
        Int32 MaxSpawnCount; // 0x44
        Boolean PlayersJoinWithZeroSpawnCount; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(BFHumanPlayerEntityData) == 0x50);
}
#pragma pack(pop)