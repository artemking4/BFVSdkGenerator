// Object: DroppedItemPhysicsComponentData
// ClassId: 1956
// RuntimeId: 60452
// TypeInfo: 0x0000000144C7D180
#include "../GameplaySim/GamePhysicsComponentData.h"
#include "../Entity/ObjectBlueprint.h"

#pragma pack(push, 16)
namespace Casablanca {
    class DroppedItemPhysicsComponentData : public GameplaySim::GamePhysicsComponentData {
        Entity::ObjectBlueprint PhysicsBlueprint; // 0xB0
        char pad_0xB8[0x8];
    }; // 0xC0
    static_assert(sizeof(DroppedItemPhysicsComponentData) == 0xC0);
}
#pragma pack(pop)