// Object: SkeletonCollisionData
// ClassId: 4630
// RuntimeId: 25017
// TypeInfo: 0x0000000144E825C0
#include "../Core/DataContainer.h"
#include "../Entity/SkeletonAsset.h"
#include "../GameShared/BoneCollisionData.h"

#pragma pack(push, 8)
namespace GameShared {
    class SkeletonCollisionData : public Core::DataContainer {
        Entity::SkeletonAsset SkeletonAsset; // 0x18
        Array<GameShared::BoneCollisionData> BoneCollisionData; // 0x20
    }; // 0x28
    static_assert(sizeof(SkeletonCollisionData) == 0x28);
}
#pragma pack(pop)