// Object: FloatCurve
// ClassId: 1630
// RuntimeId: 61800
// TypeInfo: 0x0000000144BE3560
#include "../Core/DataContainer.h"
#include "../Core/FloatCurvePoint.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Core {
    class FloatCurve : public Core::DataContainer {
        Array<Core::FloatCurvePoint> Points; // 0x18
        Float32 MinX; // 0x20
        Float32 MaxX; // 0x24
    }; // 0x28
    static_assert(sizeof(FloatCurve) == 0x28);
}
#pragma pack(pop)