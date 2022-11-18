// Object: VeniceFPSCameraData
// ClassId: 1684
// RuntimeId: 62714
// TypeInfo: 0x0000000144C7EB00
#include "../GameShared/FPSCameraData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class VeniceFPSCameraData : public GameShared::FPSCameraData {
        Float32 SuppressionBlurAmountMultiplier; // 0xD0
        Float32 SuppressionBlurSizeMultiplier; // 0xD4
        char pad_0xD8[0x8];
    }; // 0xE0
    static_assert(sizeof(VeniceFPSCameraData) == 0xE0);
}
#pragma pack(pop)