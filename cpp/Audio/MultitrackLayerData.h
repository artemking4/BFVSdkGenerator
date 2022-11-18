// Object: MultitrackLayerData
// ClassId: 4329
// RuntimeId: 10234
// TypeInfo: 0x0000000144E1D6C0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class MultitrackLayerData : public Core::DataContainer {
        Float32 MinValue; // 0x18
        Float32 MaxValue; // 0x1C
        Array<Float32> Amplitudes; // 0x20
    }; // 0x28
    static_assert(sizeof(MultitrackLayerData) == 0x28);
}
#pragma pack(pop)