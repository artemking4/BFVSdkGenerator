// Object: FlatOutputNodeConfigData
// ClassId: 936
// RuntimeId: 28583
// TypeInfo: 0x0000000144E02EF0
#include "../Audio/OutputNodeConfigData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"

#pragma pack(push, 8)
namespace Audio {
    class FlatOutputNodeConfigData : public Audio::OutputNodeConfigData {
        Float32 WorldAngle; // 0x60
        Float32 Angle; // 0x64
        Core::FloatCurve ReverbAttenuationCurve; // 0x68
        Float32 ReverbGain; // 0x70
        Boolean IsWorldAligned; // 0x74
        char pad_0x75[0x3];
    }; // 0x78
    static_assert(sizeof(FlatOutputNodeConfigData) == 0x78);
}
#pragma pack(pop)