// Object: RimeSolidFillLayer
// ClassId: 4576
// RuntimeId: 62263
// TypeInfo: 0x0000000144F27710
#include "../RimeShared/RimeFillStyleLayer.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace RimeShared {
    class RimeSolidFillLayer : public RimeShared::RimeFillStyleLayer {
        Core::Vec4 Color; // 0x30
    }; // 0x40
    static_assert(sizeof(RimeSolidFillLayer) == 0x40);
}
#pragma pack(pop)