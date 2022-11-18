// Object: MorphShape
// ClassId: 4306
// RuntimeId: 4069
// TypeInfo: 0x0000000144EA29D0
#include "../MorphBase/MorphBaseSlider.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace MorphBase {
    class MorphShape : public MorphBase::MorphBaseSlider {
        Float32 TargetMax; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(MorphShape) == 0x30);
}
#pragma pack(pop)