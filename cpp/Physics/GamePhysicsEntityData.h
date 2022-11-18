// Object: GamePhysicsEntityData
// ClassId: 3296
// RuntimeId: 34537
// TypeInfo: 0x0000000144F0F780
#include "../Entity/GameComponentEntityData.h"
#include "../Physics/PhysicsEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Physics {
    class GamePhysicsEntityData : public Entity::GameComponentEntityData {
        Physics::PhysicsEntityData PhysicsData; // 0x90
        Boolean IsTraversable; // 0x98
        char pad_0x99[0x7];
    }; // 0xA0
    static_assert(sizeof(GamePhysicsEntityData) == 0xA0);
}
#pragma pack(pop)