// Object: RimeOutlineLayer
// ClassId: 4573
// RuntimeId: 36536
// TypeInfo: 0x0000000144F27590
#include "../RimeShared/RimeFillStyleLayer.h"
#include "../Global/Float32.h"
#include "../RimeShared/RimeOutlineAlignment.h"

#pragma pack(push, 8)
namespace RimeShared {
    class RimeOutlineLayer : public RimeShared::RimeFillStyleLayer {
        Float32 Thickness; // 0x30
        RimeShared::RimeOutlineAlignment Alignment; // 0x34
    }; // 0x38
    static_assert(sizeof(RimeOutlineLayer) == 0x38);
}
#pragma pack(pop)