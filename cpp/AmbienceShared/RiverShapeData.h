// Object: RiverShapeData
// ClassId: 1673
// RuntimeId: 49495
// TypeInfo: 0x0000000144BDF960
#include "../AmbienceShared/WaterShapeData.h"
#include "../Global/Float32.h"
#include "../AmbienceShared/RiverSegment.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class RiverShapeData : public AmbienceShared::WaterShapeData {
        Float32 WidthMultiplier; // 0x48
        Float32 MetersPerPoint; // 0x4C
        Array<AmbienceShared::RiverSegment> Segments; // 0x50
    }; // 0x58
    static_assert(sizeof(RiverShapeData) == 0x58);
}
#pragma pack(pop)