// Object: DroppedItemEntityData
// ClassId: 3293
// RuntimeId: 7291
// TypeInfo: 0x0000000144C31C70
#include "../Entity/GameComponentEntityData.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class DroppedItemEntityData : public Entity::GameComponentEntityData {
        Entity::ObjectBlueprint PhysicsBlueprint; // 0x90
        Float32 Timeout; // 0x98
        char pad_0x9C[0x4];
    }; // 0xA0
    static_assert(sizeof(DroppedItemEntityData) == 0xA0);
}
#pragma pack(pop)