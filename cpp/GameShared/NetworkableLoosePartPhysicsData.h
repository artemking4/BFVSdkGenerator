// Object: NetworkableLoosePartPhysicsData
// ClassId: 4241
// RuntimeId: 58018
// TypeInfo: 0x0000000144E829C0
#include "../Physics/LoosePartPhysicsData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class NetworkableLoosePartPhysicsData : public Physics::LoosePartPhysicsData {
        Boolean Networked; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(NetworkableLoosePartPhysicsData) == 0x30);
}
#pragma pack(pop)