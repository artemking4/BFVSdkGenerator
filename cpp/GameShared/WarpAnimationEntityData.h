// Object: WarpAnimationEntityData
// ClassId: 3907
// RuntimeId: 23248
// TypeInfo: 0x0000000144E9A990
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/WarpAnimationBinding.h"
#include "../Global/Int32.h"
#include "../Entity/GameplayBones.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace GameShared {
    class WarpAnimationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform ConnectTransform; // 0x30
        GameShared::WarpAnimationBinding WarpBinding; // 0x70
        Int32 AnimationEntitySpacePriority; // 0xFC
        Entity::GameplayBones BoneToAlign; // 0x100
        Boolean RequireAnimationWeight; // 0x104
        Boolean ForceAnimationTransform; // 0x105
        Boolean ExternalConnectTransform; // 0x106
        char pad_0x107[0x9];
    }; // 0x110
    static_assert(sizeof(WarpAnimationEntityData) == 0x110);
}
#pragma pack(pop)