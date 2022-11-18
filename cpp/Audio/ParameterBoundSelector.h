// Object: ParameterBoundSelector
// ClassId: 4406
// RuntimeId: 12212
// TypeInfo: 0x0000000144E1D240
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Audio/MusicSelector.h"

#pragma pack(push, 8)
namespace Audio {
    class ParameterBoundSelector : public Core::DataContainer {
        Float32 ParameterValue; // 0x18
        char pad_0x1C[0x4];
        Audio::MusicSelector Selector; // 0x20
    }; // 0x28
    static_assert(sizeof(ParameterBoundSelector) == 0x28);
}
#pragma pack(pop)