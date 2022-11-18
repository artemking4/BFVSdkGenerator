// Object: BoneCollisionComponentData
// ClassId: 1725
// RuntimeId: 32174
// TypeInfo: 0x0000000144F39D10
#include "../Entity/GameComponentData.h"
#include "../GameShared/SkeletonCollisionData.h"
#include "../Entity/MaterialDecl.h"
#include "../GameShared/HitReactionType.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class BoneCollisionComponentData : public Entity::GameComponentData {
        GameShared::SkeletonCollisionData SkeletonCollisionData; // 0x80
        Entity::MaterialDecl CharacterMaterial; // 0x88
        char pad_0x8C[0x4];
        Array<GameShared::HitReactionType> PrioritizedHitReactionTypes; // 0x90
        Int32 BoneMaterialIndex; // 0x98
        char pad_0x9C[0x4];
    }; // 0xA0
    static_assert(sizeof(BoneCollisionComponentData) == 0xA0);
}
#pragma pack(pop)