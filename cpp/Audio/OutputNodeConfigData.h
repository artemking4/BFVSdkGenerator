// Object: OutputNodeConfigData
// ClassId: 934
// RuntimeId: 55278
// TypeInfo: 0x0000000144E03070
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"
#include "../Global/Boolean.h"
#include "../Audio/MixGroup.h"

#pragma pack(push, 8)
namespace Audio {
    class OutputNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Float32 MinDistance; // 0x28
        char pad_0x2C[0x4];
        Core::FloatCurve AttenuationCurve; // 0x30
        Float32 CurveFactor; // 0x38
        Float32 HFDampingDistance; // 0x3C
        Float32 HFDampingObstruction; // 0x40
        Float32 HFDampingOcclusion; // 0x44
        Float32 Gain; // 0x48
        Float32 ExpectedPeakAmplitude; // 0x4C
        Audio::MixGroup MixGroup; // 0x50
        Boolean EnableHdr; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(OutputNodeConfigData) == 0x60);
}
#pragma pack(pop)