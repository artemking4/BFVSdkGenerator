// Object: CompressorSettings
// ClassId: 1423
// RuntimeId: 45456
// TypeInfo: 0x0000000144E01B70
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class CompressorSettings : public Core::DataContainer {
        Float32 Ratio; // 0x18
        Float32 Threshold; // 0x1C
        Float32 Attack; // 0x20
        Float32 Release; // 0x24
    }; // 0x28
    static_assert(sizeof(CompressorSettings) == 0x28);
}
#pragma pack(pop)