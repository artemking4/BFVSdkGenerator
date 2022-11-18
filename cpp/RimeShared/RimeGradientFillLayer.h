// Object: RimeGradientFillLayer
// ClassId: 4572
// RuntimeId: 52962
// TypeInfo: 0x0000000144F27690
#include "../RimeShared/RimeFillStyleLayer.h"
#include "../Core/Vec4.h"
#include "../RimeShared/RimeGradientDirection.h"

#pragma pack(push, 16)
namespace RimeShared {
    class RimeGradientFillLayer : public RimeShared::RimeFillStyleLayer {
        RimeShared::RimeGradientDirection Direction; // 0x30
        char pad_0x34[0xC];
        Core::Vec4 StartColor; // 0x40
        Core::Vec4 EndColor; // 0x50
    }; // 0x60
    static_assert(sizeof(RimeGradientFillLayer) == 0x60);
}
#pragma pack(pop)