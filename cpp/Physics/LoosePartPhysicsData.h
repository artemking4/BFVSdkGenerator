// Object: LoosePartPhysicsData
// ClassId: 4239
// RuntimeId: 25803
// TypeInfo: 0x0000000144F0E2C0
#include "../Core/DataContainer.h"
#include "../Physics/FakePhysicsData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Physics {
    class LoosePartPhysicsData : public Core::DataContainer {
        Physics::FakePhysicsData FakePhysics; // 0x18
        Boolean ModelSpace; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(LoosePartPhysicsData) == 0x28);
}
#pragma pack(pop)