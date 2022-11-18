// Object: AIStateEntityData
// ClassId: 2016
// RuntimeId: 21569
// TypeInfo: 0x0000000144C06660
#include "../Entity/EntityData.h"
#include "../BattleAIShared/AIStateBinding.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIStateEntityData : public Entity::EntityData {
        BattleAIShared::AIStateBinding Binding; // 0x20
        Float32 FriendlyInitialVORadius; // 0x5C
        Float32 EnemyInitialVORadius; // 0x60
        char pad_0x64[0x4];
    }; // 0x68
    static_assert(sizeof(AIStateEntityData) == 0x68);
}
#pragma pack(pop)