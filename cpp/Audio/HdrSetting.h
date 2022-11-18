// Object: HdrSetting
// ClassId: 4093
// RuntimeId: 18111
// TypeInfo: 0x0000000144E01C70
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Core/AudioCurve.h"

#pragma pack(push, 8)
namespace Audio {
    class HdrSetting : public Core::DataContainer {
        Float32 WindowMinTop; // 0x18
        Float32 WindowMinBottom; // 0x1C
        Float32 WindowTopMinReleaseTime; // 0x20
        Float32 WindowTopMaxReleaseTime; // 0x24
        Float32 WindowTopAttackTime; // 0x28
        Float32 WindowBottomReleaseTime; // 0x2C
        Core::AudioCurve WindowTopReleaseTimeCurve; // 0x30
        Float32 DischargeFactor; // 0x40
        Float32 MaxAllowedEnergy; // 0x44
        Float32 WindowBottomAttackTime; // 0x48
        Float32 WindowSize; // 0x4C
        Float32 CompressFactor; // 0x50
        Float32 Headroom; // 0x54
        Float32 AllowedOvershoot; // 0x58
        char pad_0x5C[0x4];
    }; // 0x60
    static_assert(sizeof(HdrSetting) == 0x60);
}
#pragma pack(pop)