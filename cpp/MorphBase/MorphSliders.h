// Object: MorphSliders
// ClassId: 575
// RuntimeId: 45504
// TypeInfo: 0x0000000144EA2750
#include "../Core/Asset.h"
#include "../MorphBase/MorphTwoWaySlider.h"
#include "../MorphBase/MorphOneWaySlider.h"

#pragma pack(push, 8)
namespace MorphBase {
    class MorphSliders : public Core::Asset {
        Array<MorphBase::MorphTwoWaySlider> TwoWaySliders; // 0x20
        Array<MorphBase::MorphOneWaySlider> OneWaySliders; // 0x28
    }; // 0x30
    static_assert(sizeof(MorphSliders) == 0x30);
}
#pragma pack(pop)