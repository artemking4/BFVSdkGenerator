// Object: SimpleDriverEntityData
// ClassId: 3209
// RuntimeId: 61983
// TypeInfo: 0x0000000144C31DF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Casablanca {
    class SimpleDriverEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 TargetWorldPos; // 0x30
        Int32 TakeControlEntryIndex; // 0x40
        Float32 ArrivedAtTargetThreshold; // 0x44
        Float32 ThrottleWhenFacingTarget; // 0x48
        Float32 ThrottleWhenFacingAwayFromTarget; // 0x4C
    }; // 0x50
    static_assert(sizeof(SimpleDriverEntityData) == 0x50);
}
#pragma pack(pop)