// Object: FloatEaseFunctionEntityData
// ClassId: 2750
// RuntimeId: 47617
// TypeInfo: 0x0000000144D4B7F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../UIIncubatorShared/PropertyInterpolationType.h"
#include "../UIIncubatorShared/PropertyInterpolationMode.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FloatEaseFunctionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        UIIncubatorShared::PropertyInterpolationType InterpolationType; // 0x24
        UIIncubatorShared::PropertyInterpolationMode InterpolationMode; // 0x28
        Float32 InputRangeMin; // 0x2C
        Float32 InputRangeMax; // 0x30
        Float32 OutputRangeMin; // 0x34
        Float32 OutputRangeMax; // 0x38
        Float32 In; // 0x3C
        Boolean ClampInput; // 0x40
        Boolean ClampOutput; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(FloatEaseFunctionEntityData) == 0x48);
}
#pragma pack(pop)