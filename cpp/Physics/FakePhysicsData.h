// Object: FakePhysicsData
// ClassId: 1619
// RuntimeId: 18874
// TypeInfo: 0x0000000144F0E440
#include "../Core/DataContainer.h"
#include "../Physics/FakePhysicsData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Physics {
    class FakePhysicsData : public Core::DataContainer {
        Physics::FakePhysicsData ChildFakePhysics; // 0x18
        Float32 StartSpeed; // 0x20
        Float32 GravityModifier; // 0x24
        Float32 StartDampening; // 0x28
        Float32 EndDampening; // 0x2C
        Float32 MinSpeed; // 0x30
        Float32 MaxSpeed; // 0x34
        Float32 Mass; // 0x38
        Float32 ParentMovementScale; // 0x3C
        Boolean IgnoreImpulses; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(FakePhysicsData) == 0x48);
}
#pragma pack(pop)