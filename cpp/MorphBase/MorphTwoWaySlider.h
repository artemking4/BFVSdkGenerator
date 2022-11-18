// Object: MorphTwoWaySlider
// ClassId: 4307
// RuntimeId: 42129
// TypeInfo: 0x0000000144EA2AD0
#include "../MorphBase/MorphBaseSlider.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace MorphBase {
    class MorphTwoWaySlider : public MorphBase::MorphBaseSlider {
        Float32 LeftMax; // 0x28
        Float32 RightMax; // 0x2C
    }; // 0x30
    static_assert(sizeof(MorphTwoWaySlider) == 0x30);
}
#pragma pack(pop)