// Object: CameraLoosePartPhysicsData
// ClassId: 4240
// RuntimeId: 37506
// TypeInfo: 0x0000000144F0E240
#include "../Physics/LoosePartPhysicsData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Physics {
    class CameraLoosePartPhysicsData : public Physics::LoosePartPhysicsData {
        Float32 Scale; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(CameraLoosePartPhysicsData) == 0x30);
}
#pragma pack(pop)