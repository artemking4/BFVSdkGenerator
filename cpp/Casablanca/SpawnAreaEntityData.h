// Object: SpawnAreaEntityData
// ClassId: 3486
// RuntimeId: 16702
// TypeInfo: 0x0000000144C315F0
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SpawnAreaEntityData : public Entity::EntityData {
        GameShared::TeamId Team; // 0x20
        Float32 AlternateSpawnCooldown; // 0x24
        Boolean Enabled; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SpawnAreaEntityData) == 0x30);
}
#pragma pack(pop)