// Object: ObjectOutputNodeConfigData
// ClassId: 937
// RuntimeId: 25578
// TypeInfo: 0x0000000144E02CF0
#include "../Audio/OutputNodeConfigData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"
#include "../Audio/SoundBusPatchAsset.h"

#pragma pack(push, 16)
namespace Audio {
    class ObjectOutputNodeConfigData : public Audio::OutputNodeConfigData {
        Core::Vec3 Direction; // 0x60
        Float32 OutsideGain; // 0x70
        Float32 BleedMinDistance; // 0x74
        Float32 BleedMaxDistance; // 0x78
        Float32 MaxSpreadAtMinBleedDistance; // 0x7C
        Float32 InnerAngle; // 0x80
        Float32 OuterAngle; // 0x84
        Float32 HFDampingAngle; // 0x88
        Float32 ListenerOutsideGain; // 0x8C
        Float32 ListenerHFDampingAngle; // 0x90
        char pad_0x94[0x4];
        Core::FloatCurve ReverbAttenuationCurve; // 0x98
        Float32 ReverbGain; // 0xA0
        char pad_0xA4[0x4];
        Audio::SoundBusPatchAsset ObjectPatch; // 0xA8
        Float32 Size; // 0xB0
        char pad_0xB4[0xC];
    }; // 0xC0
    static_assert(sizeof(ObjectOutputNodeConfigData) == 0xC0);
}
#pragma pack(pop)