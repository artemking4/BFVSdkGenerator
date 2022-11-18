// Object: MorphBaseSlider
// ClassId: 4304
// RuntimeId: 19933
// TypeInfo: 0x0000000144EA2B50
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../MorphBase/MorphSliderType.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace MorphBase {
    class MorphBaseSlider : public Core::DataContainer {
        MorphBase::MorphSliderType SliderType; // 0x18
        Float32 DefaultWeight; // 0x1C
        Boolean DisableAdditiveBoneOffsets; // 0x20
        Boolean EnabledWithHair; // 0x21
        Boolean EnabledWithBeard; // 0x22
        Boolean DebugOnly; // 0x23
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(MorphBaseSlider) == 0x28);
}
#pragma pack(pop)