// Object: GroupHavokAsset
// ClassId: 528
// RuntimeId: 32019
// TypeInfo: 0x0000000144F0DD40
#include "../Physics/HavokAsset.h"
#include "../Physics/AssetAabbs.h"

#pragma pack(push, 8)
namespace Physics {
    class GroupHavokAsset : public Physics::HavokAsset {
        Array<Physics::AssetAabbs> Aabb; // 0x30
    }; // 0x38
    static_assert(sizeof(GroupHavokAsset) == 0x38);
}
#pragma pack(pop)