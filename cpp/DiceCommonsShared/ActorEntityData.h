// Object: ActorEntityData
// ClassId: 3297
// RuntimeId: 38950
// TypeInfo: 0x0000000144DB5F90
#include "../Physics/GamePhysicsEntityData.h"
#include "../Core/Realm.h"
#include "../Render/MeshAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class ActorEntityData : public Physics::GamePhysicsEntityData {
        Core::Realm Realm; // 0xA0
        char pad_0xA4[0x4];
        Render::MeshAsset Mesh; // 0xA8
        Boolean UpdateAnimatableTransform; // 0xB0
        Boolean UpdatePhysicsTransform; // 0xB1
        Boolean ServerPhysicsEnabled; // 0xB2
        char pad_0xB3[0xD];
    }; // 0xC0
    static_assert(sizeof(ActorEntityData) == 0xC0);
}
#pragma pack(pop)