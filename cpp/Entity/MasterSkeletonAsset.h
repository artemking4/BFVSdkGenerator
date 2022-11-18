// Object: MasterSkeletonAsset
// ClassId: 554
// RuntimeId: 61194
// TypeInfo: 0x0000000144EE6CD0
#include "../Core/Asset.h"
#include "../Entity/SkeletonAsset.h"
#include "../Entity/SubSkeleton.h"

#pragma pack(push, 8)
namespace Entity {
    class MasterSkeletonAsset : public Core::Asset {
        Entity::SkeletonAsset MasterSkeleton; // 0x20
        Array<Entity::SubSkeleton> SubSkeletons; // 0x28
    }; // 0x30
    static_assert(sizeof(MasterSkeletonAsset) == 0x30);
}
#pragma pack(pop)