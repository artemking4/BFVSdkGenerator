// Object: FakePhysicsMeshComponentData
// ClassId: 1804
// RuntimeId: 46567
// TypeInfo: 0x0000000144E8DB60
#include "../GameShared/MeshComponentData.h"
#include "../GameShared/BoneFakePhysicsData.h"
#include "../GameShared/NetworkableLoosePartPhysicsData.h"
#include "../Entity/SkeletonAsset.h"

#pragma pack(push, 16)
namespace GameShared {
    class FakePhysicsMeshComponentData : public GameShared::MeshComponentData {
        Array<GameShared::BoneFakePhysicsData> BoneFakePhysics; // 0x90
        Array<GameShared::NetworkableLoosePartPhysicsData> LoosePartPhysics; // 0x98
        Entity::SkeletonAsset Skeleton; // 0xA0
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(FakePhysicsMeshComponentData) == 0xB0);
}
#pragma pack(pop)