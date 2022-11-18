// Object: AnimatableTransformLinkData
// ClassId: 1568
// RuntimeId: 10047
// TypeInfo: 0x0000000144DBAB80
#include "../DiceCommonsShared/EntityTransformLinkData.h"
#include "../Entity/GameplayBones.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AnimatableTransformLinkData : public DiceCommonsShared::EntityTransformLinkData {
        Entity::GameplayBones Bone; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(AnimatableTransformLinkData) == 0x28);
}
#pragma pack(pop)