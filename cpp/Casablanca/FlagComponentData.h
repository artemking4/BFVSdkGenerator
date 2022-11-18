// Object: FlagComponentData
// ClassId: 1780
// RuntimeId: 64294
// TypeInfo: 0x0000000144C7D380
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../Entity/GameplayBones.h"

#pragma pack(push, 16)
namespace Casablanca {
    class FlagComponentData : public Entity::GameComponentData {
        Core::LinearTransform TransformOverride; // 0x80
        Core::LinearTransform AttachToBoneOffset; // 0xC0
        Core::Realm Realm; // 0x100
        Entity::GameplayBones AttachToBone; // 0x104
        Boolean UseTransformOverride; // 0x108
        char pad_0x109[0x7];
    }; // 0x110
    static_assert(sizeof(FlagComponentData) == 0x110);
}
#pragma pack(pop)