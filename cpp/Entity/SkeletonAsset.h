// Object: SkeletonAsset
// ClassId: 185
// RuntimeId: 55314
// TypeInfo: 0x0000000144EE6D50
#include "../Entity/BaseSkeletonAsset.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 8)
namespace Entity {
    class SkeletonAsset : public Entity::BaseSkeletonAsset {
        Array<CString> BoneNames; // 0x20
        Array<Uint32> BoneNameHashes; // 0x28
        Array<Int32> Hierarchy; // 0x30
        Array<Core::LinearTransform> LocalPose; // 0x38
        Array<Core::LinearTransform> ModelPose; // 0x40
        Array<Int32> ServerSkeletonToSkeletonMap; // 0x48
        Array<Int32> SkeletonToServerSkeletonMap; // 0x50
        Array<Int32> ServerHierarchy; // 0x58
        Array<Int32> GameplayBonesToSkeleton; // 0x60
        Array<Int32> GameplayBonesToServerSkeleton; // 0x68
    }; // 0x70
    static_assert(sizeof(SkeletonAsset) == 0x70);
}
#pragma pack(pop)