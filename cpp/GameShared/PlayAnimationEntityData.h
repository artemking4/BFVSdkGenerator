// Object: PlayAnimationEntityData
// ClassId: 3005
// RuntimeId: 27569
// TypeInfo: 0x0000000144E6D9D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/PlayAnimationData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace GameShared {
    class PlayAnimationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform EntitySpace0; // 0x30
        Core::LinearTransform EntitySpace1; // 0x70
        Core::LinearTransform EntitySpace2; // 0xB0
        Core::LinearTransform EntitySpace3; // 0xF0
        Core::LinearTransform EntitySpace4; // 0x130
        GameShared::PlayAnimationData Animation; // 0x170
        Float32 ExternalTime; // 0x178
        Float32 LifeTime; // 0x17C
        Float32 AlignValue; // 0x180
        Boolean Replicated; // 0x184
        Boolean TriggerIfCulled; // 0x185
        char pad_0x186[0xA];
    }; // 0x190
    static_assert(sizeof(PlayAnimationEntityData) == 0x190);
}
#pragma pack(pop)