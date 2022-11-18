// Object: CharacterPhysicsComponentData
// ClassId: 1742
// RuntimeId: 22170
// TypeInfo: 0x0000000144E83240
#include "../Entity/GameComponentData.h"
#include "../Physics/CharacterPhysicsData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class CharacterPhysicsComponentData : public Entity::GameComponentData {
        Physics::CharacterPhysicsData CharacterPhysics; // 0x80
        Boolean EnableCollisionOnSpawn; // 0x88
        char pad_0x89[0x7];
    }; // 0x90
    static_assert(sizeof(CharacterPhysicsComponentData) == 0x90);
}
#pragma pack(pop)