// Object: AnimatableAttachData
// ClassId: 1560
// RuntimeId: 15091
// TypeInfo: 0x0000000144DBA800
#include "../DiceCommonsShared/EntityAttachData.h"
#include "../Entity/GameplayBones.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AnimatableAttachData : public DiceCommonsShared::EntityAttachData {
        Entity::GameplayBones Bone; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(AnimatableAttachData) == 0x48);
}
#pragma pack(pop)