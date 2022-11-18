// Object: GroupRigidBodyData
// ClassId: 2981
// RuntimeId: 29748
// TypeInfo: 0x0000000144F0F380
#include "../Physics/RigidBodyData.h"
#include "../Physics/MaterialIndicesLookup.h"

#pragma pack(push, 16)
namespace Physics {
    class GroupRigidBodyData : public Physics::RigidBodyData {
        Array<Physics::MaterialIndicesLookup> RaycastMaterialIndicesLookups; // 0x130
        char pad_0x138[0x8];
    }; // 0x140
    static_assert(sizeof(GroupRigidBodyData) == 0x140);
}
#pragma pack(pop)