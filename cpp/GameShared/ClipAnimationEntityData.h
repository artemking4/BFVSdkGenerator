// Object: ClipAnimationEntityData
// ClassId: 2514
// RuntimeId: 19727
// TypeInfo: 0x0000000144E90DE0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Animation/ClipAsset.h"

#pragma pack(push, 8)
namespace GameShared {
    class ClipAnimationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 ExternalTime; // 0x24
        Float32 PlaybackSpeed; // 0x28
        char pad_0x2C[0x4];
        Animation::ClipAsset ClipAsset; // 0x30
        Boolean AutoStart; // 0x38
        Boolean Looping; // 0x39
        Boolean ResetAfterStop; // 0x3A
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(ClipAnimationEntityData) == 0x40);
}
#pragma pack(pop)