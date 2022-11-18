// Object: FakeSpringData
// ClassId: 1621
// RuntimeId: 33973
// TypeInfo: 0x0000000144F0E3C0
#include "../Physics/FakePhysicsData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Physics {
    class FakeSpringData : public Physics::FakePhysicsData {
        char pad_0x48[0x8];
        Core::Vec3 Direction; // 0x50
        Float32 Length; // 0x60
        Float32 Acceleration; // 0x64
        Float32 ProgressiveExponent; // 0x68
        Float32 Damping; // 0x6C
    }; // 0x70
    static_assert(sizeof(FakeSpringData) == 0x70);
}
#pragma pack(pop)