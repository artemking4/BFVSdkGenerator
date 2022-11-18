// Object: CharacterPhysicsBodyData
// ClassId: 2977
// RuntimeId: 20277
// TypeInfo: 0x0000000144F0FF00
#include "../Physics/PhysicsBodyData.h"
#include "../Physics/CharacterPhysicsData.h"

#pragma pack(push, 8)
namespace Physics {
    class CharacterPhysicsBodyData : public Physics::PhysicsBodyData {
        Physics::CharacterPhysicsData CharacterPhysics; // 0x38
    }; // 0x40
    static_assert(sizeof(CharacterPhysicsBodyData) == 0x40);
}
#pragma pack(pop)