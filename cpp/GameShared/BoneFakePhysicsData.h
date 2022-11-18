// Object: BoneFakePhysicsData
// ClassId: 1276
// RuntimeId: 7808
// TypeInfo: 0x0000000144E97710
#include "../Core/DataContainer.h"
#include "../Physics/FakePhysicsData.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class BoneFakePhysicsData : public Core::DataContainer {
        Physics::FakePhysicsData FakePhysics; // 0x18
        CString BoneName; // 0x20
        Int32 BoneId; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(BoneFakePhysicsData) == 0x30);
}
#pragma pack(pop)