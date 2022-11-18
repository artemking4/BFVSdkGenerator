// Object: BFUIPlayerFilterEntityData
// ClassId: 2336
// RuntimeId: 6900
// TypeInfo: 0x0000000144D86CA0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/BFUIPlayerList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayerFilterEntityData : public Entity::EntityData {
        Int32 PlayerPerformanceKillThreshold; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIPlayerList PlayerList; // 0x28
        Boolean ExcludeLocalPlayer; // 0x30
        Boolean ExcludeLowestPerformingPlayers; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(BFUIPlayerFilterEntityData) == 0x38);
}
#pragma pack(pop)