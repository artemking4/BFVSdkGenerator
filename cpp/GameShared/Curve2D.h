// Object: Curve2D
// ClassId: 1479
// RuntimeId: 7306
// TypeInfo: 0x0000000144E9B490
#include "../Core/DataContainer.h"
#include "../Core/Vec2.h"

#pragma pack(push, 8)
namespace GameShared {
    class Curve2D : public Core::DataContainer {
        Array<Core::Vec2> Curve; // 0x18
    }; // 0x20
    static_assert(sizeof(Curve2D) == 0x20);
}
#pragma pack(pop)