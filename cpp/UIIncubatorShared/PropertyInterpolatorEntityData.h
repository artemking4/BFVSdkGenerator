// Object: PropertyInterpolatorEntityData
// ClassId: 3064
// RuntimeId: 18927
// TypeInfo: 0x0000000144F6E2C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../UIIncubatorShared/PropertyInterpolationType.h"
#include "../UIIncubatorShared/PropertyInterpolationMode.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class PropertyInterpolatorEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        UIIncubatorShared::PropertyInterpolationType InterpolationType; // 0x24
        UIIncubatorShared::PropertyInterpolationMode InterpolationMode; // 0x28
        Float32 Duration; // 0x2C
        Boolean UseRealTimeClock; // 0x30
        Boolean ForceFrameCorrectOutput; // 0x31
        Boolean DynamicDuration; // 0x32
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(PropertyInterpolatorEntityData) == 0x38);
}
#pragma pack(pop)