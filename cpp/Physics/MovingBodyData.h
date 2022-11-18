// Object: MovingBodyData
// ClassId: 4321
// RuntimeId: 1653
// TypeInfo: 0x0000000144F0E1C0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Physics {
    class MovingBodyData : public Core::DataContainer {
        Float32 Mass; // 0x18
        Float32 Inertia; // 0x1C
    }; // 0x20
    static_assert(sizeof(MovingBodyData) == 0x20);
}
#pragma pack(pop)