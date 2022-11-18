// Object: RimePropertyInterpolatorEntityData
// ClassId: 3123
// RuntimeId: 65369
// TypeInfo: 0x0000000144F2B710
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../UIIncubatorShared/PropertyInterpolationType.h"
#include "../UIIncubatorShared/PropertyInterpolationMode.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

namespace RimeElementsShared {
    class RimePropertyInterpolatorEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        UIIncubatorShared::PropertyInterpolationType InterpolationType; // 0x24
        UIIncubatorShared::PropertyInterpolationMode InterpolationMode; // 0x28
        Float32 Duration; // 0x2C
        Boolean UseRealTimeClock; // 0x30
        Boolean ForceFrameCorrectOutput; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(RimePropertyInterpolatorEntityData) == 0x38);
}