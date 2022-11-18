// Object: ForceComponentData
// ClassId: 1692
// RuntimeId: 43033
// TypeInfo: 0x0000000144F0F980
#include "../Entity/ComponentData.h"
#include "../Physics/WindPhysicsActionData.h"

#pragma pack(push, 16)
namespace Physics {
    class ForceComponentData : public Entity::ComponentData {
        Physics::WindPhysicsActionData WindActionData; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(ForceComponentData) == 0x90);
}
#pragma pack(pop)