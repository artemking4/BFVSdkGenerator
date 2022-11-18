// Object: RimeFillStyle
// ClassId: 706
// RuntimeId: 51379
// TypeInfo: 0x0000000144F27810
#include "../Core/Asset.h"
#include "../RimeShared/RimeFillStyleLayer.h"

#pragma pack(push, 8)
namespace RimeShared {
    class RimeFillStyle : public Core::Asset {
        Array<RimeShared::RimeFillStyleLayer> Layers; // 0x20
    }; // 0x28
    static_assert(sizeof(RimeFillStyle) == 0x28);
}
#pragma pack(pop)