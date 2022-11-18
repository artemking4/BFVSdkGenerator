// Object: LinearMovingBodyData
// ClassId: 4322
// RuntimeId: 5390
// TypeInfo: 0x0000000144F0E140
#include "../Physics/MovingBodyData.h"
#include "../Core/Vec3.h"
#include "../Physics/EndPointData.h"

#pragma pack(push, 16)
namespace Physics {
    class LinearMovingBodyData : public Physics::MovingBodyData {
        Core::Vec3 Axis; // 0x20
        Physics::EndPointData Start; // 0x30
        Physics::EndPointData End; // 0x44
        char pad_0x58[0x8];
    }; // 0x60
    static_assert(sizeof(LinearMovingBodyData) == 0x60);
}
#pragma pack(pop)