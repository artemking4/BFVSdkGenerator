// Object: EffectSystemSettings
// ClassId: 1539
// RuntimeId: 60169
// TypeInfo: 0x0000000144E22980
#include "../Core/DataContainer.h"
#include "../Core/QualityLevel.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Effect {
    class EffectSystemSettings : public Core::DataContainer {
        Core::QualityLevel EffectQualityLevel; // 0x18
        Boolean EnterLevelDisableEffectEnable; // 0x1C
        char pad_0x1D[0x3];
    }; // 0x20
    static_assert(sizeof(EffectSystemSettings) == 0x20);
}
#pragma pack(pop)