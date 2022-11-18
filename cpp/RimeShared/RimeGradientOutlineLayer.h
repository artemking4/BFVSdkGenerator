// Object: RimeGradientOutlineLayer
// ClassId: 4574
// RuntimeId: 15105
// TypeInfo: 0x0000000144F27490
#include "../RimeShared/RimeOutlineLayer.h"
#include "../Core/Vec4.h"
#include "../RimeShared/RimeGradientDirection.h"

#pragma pack(push, 16)
namespace RimeShared {
    class RimeGradientOutlineLayer : public RimeShared::RimeOutlineLayer {
        RimeShared::RimeGradientDirection Direction; // 0x38
        char pad_0x3C[0x4];
        Core::Vec4 StartColor; // 0x40
        Core::Vec4 EndColor; // 0x50
    }; // 0x60
    static_assert(sizeof(RimeGradientOutlineLayer) == 0x60);
}
#pragma pack(pop)