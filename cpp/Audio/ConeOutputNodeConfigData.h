// Object: ConeOutputNodeConfigData
// ClassId: 935
// RuntimeId: 61801
// TypeInfo: 0x0000000144E02DF0
#include "../Audio/OutputNodeConfigData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"

#pragma pack(push, 16)
namespace Audio {
    class ConeOutputNodeConfigData : public Audio::OutputNodeConfigData {
        Core::Vec3 Direction; // 0x60
        Float32 OutsideGain; // 0x70
        Float32 PanSize; // 0x74
        Float32 BleedMinDistance; // 0x78
        Float32 BleedMaxDistance; // 0x7C
        Float32 InnerAngle; // 0x80
        Float32 OuterAngle; // 0x84
        Float32 HFDampingAngle; // 0x88
        Float32 ListenerOutsideGain; // 0x8C
        Float32 ListenerHFDampingAngle; // 0x90
        char pad_0x94[0x4];
        Core::FloatCurve ReverbAttenuationCurve; // 0x98
        Float32 ReverbGain; // 0xA0
        char pad_0xA4[0xC];
    }; // 0xB0
    static_assert(sizeof(ConeOutputNodeConfigData) == 0xB0);
}
#pragma pack(pop)