// Object: WarpAnimationComponentData
// ClassId: 1918
// RuntimeId: 35657
// TypeInfo: 0x0000000144E9AA10
#include "../Entity/GameComponentData.h"
#include "../GameShared/WarpAnimationBinding.h"
#include "../GameShared/CannedAnimationBinding.h"
#include "../Global/Int32.h"
#include "../Entity/GameplayBones.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace GameShared {
    class WarpAnimationComponentData : public Entity::GameComponentData {
        Core::LinearTransform ConnectTransform; // 0x80
        GameShared::WarpAnimationBinding WarpBinding; // 0xC0
        GameShared::CannedAnimationBinding CannedAnimBinding; // 0x14C
        Int32 AnimationEntitySpacePriority; // 0x228
        Entity::GameplayBones BoneToAlign; // 0x22C
        Boolean RequireAnimationWeight; // 0x230
        Boolean ForceAnimationTransform; // 0x231
        Boolean ExternalConnectTransform; // 0x232
        char pad_0x233[0xD];
    }; // 0x240
    static_assert(sizeof(WarpAnimationComponentData) == 0x240);
}
#pragma pack(pop)