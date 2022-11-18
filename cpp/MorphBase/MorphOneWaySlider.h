// Object: MorphOneWaySlider
// ClassId: 4305
// RuntimeId: 48622
// TypeInfo: 0x0000000144EA2A50
#include "../MorphBase/MorphBaseSlider.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace MorphBase {
    class MorphOneWaySlider : public MorphBase::MorphBaseSlider {
        Float32 TargetMax; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(MorphOneWaySlider) == 0x30);
}
#pragma pack(pop)