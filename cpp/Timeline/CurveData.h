// Object: CurveData
// ClassId: 1480
// RuntimeId: 26139
// TypeInfo: 0x0000000144F64920
#include "../Core/DataContainer.h"
#include "../Timeline/InfinityType.h"
#include "../Global/Boolean.h"
#include "../Timeline/CurveType.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Timeline {
    class CurveData : public Core::DataContainer {
        Timeline::InfinityType PreInfinity; // 0x18
        Timeline::InfinityType PostInfinity; // 0x1C
        Timeline::CurveType CurveType; // 0x20
        char pad_0x24[0x4];
        Array<Float32> Time; // 0x28
        Array<Float32> Value; // 0x30
        Array<Float32> InTanX; // 0x38
        Array<Float32> InTanY; // 0x40
        Array<Float32> OutTanX; // 0x48
        Array<Float32> OutTanY; // 0x50
        Boolean IsWeighted; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(CurveData) == 0x60);
}
#pragma pack(pop)