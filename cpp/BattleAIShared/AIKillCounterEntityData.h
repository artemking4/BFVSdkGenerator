// Object: AIKillCounterEntityData
// ClassId: 1979
// RuntimeId: 57397
// TypeInfo: 0x0000000144BFEE50
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIKillCounterEntityData : public Entity::EntityData {
        Int32 AliveThreshold; // 0x20
        Boolean RunOnce; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(AIKillCounterEntityData) == 0x28);
}
#pragma pack(pop)