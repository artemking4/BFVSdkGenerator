// Object: EqualizerSettings
// ClassId: 1578
// RuntimeId: 16335
// TypeInfo: 0x0000000144E01AF0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class EqualizerSettings : public Core::DataContainer {
        Float32 LowShelfFrequency; // 0x18
        Float32 LowShelfGain; // 0x1C
        Float32 HighShelfFrequency; // 0x20
        Float32 HighShelfGain; // 0x24
        Float32 HpCutoffFrequency; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(EqualizerSettings) == 0x30);
}
#pragma pack(pop)