// Object: BoxFloatPhysicsData
// ClassId: 1637
// RuntimeId: 16055
// TypeInfo: 0x0000000144F0F500
#include "../Physics/FloatPhysicsData.h"
#include "../Physics/FloatPhysicsActionData.h"

#pragma pack(push, 8)
namespace Physics {
    class BoxFloatPhysicsData : public Physics::FloatPhysicsData {
        Physics::FloatPhysicsActionData BoxActionData; // 0x20
    }; // 0x28
    static_assert(sizeof(BoxFloatPhysicsData) == 0x28);
}
#pragma pack(pop)