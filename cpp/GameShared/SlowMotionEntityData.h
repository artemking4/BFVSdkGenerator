// Object: SlowMotionEntityData
// ClassId: 3218
// RuntimeId: 52483
// TypeInfo: 0x0000000144E90C60
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class SlowMotionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 TimeScale; // 0x24
        Float32 ScaleDownTransitionTime; // 0x28
        Float32 ScaleUpTransitionTime; // 0x2C
    }; // 0x30
    static_assert(sizeof(SlowMotionEntityData) == 0x30);
}
#pragma pack(pop)