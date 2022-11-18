// Object: RimeFillStyleLayer
// ClassId: 4571
// RuntimeId: 14391
// TypeInfo: 0x0000000144F27790
#include "../Core/DataContainer.h"
#include "../RimeShared/RimeBlendMode.h"
#include "../Core/Vec2.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace RimeShared {
    class RimeFillStyleLayer : public Core::DataContainer {
        RimeShared::RimeBlendMode BlendMode; // 0x18
        Core::Vec2 Offset; // 0x1C
        Float32 Expand; // 0x24
        Boolean SmoothEdges; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(RimeFillStyleLayer) == 0x30);
}
#pragma pack(pop)