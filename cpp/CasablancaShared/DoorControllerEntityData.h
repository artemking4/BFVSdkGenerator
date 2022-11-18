// Object: DoorControllerEntityData
// ClassId: 3361
// RuntimeId: 60463
// TypeInfo: 0x0000000144D01120
#include "../Entity/SpatialEntityData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"
#include "../CasablancaShared/UsageRestriction.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DoorControllerEntityData : public Entity::SpatialEntityData {
        Core::LinearTransform BarrierLocalTransform; // 0x60
        CasablancaShared::UsageRestriction BargeUsageRestriction; // 0xA0
        CasablancaShared::UsageRestriction HandleUsageRestriction; // 0xE0
        Int32 InitialRotationIndex; // 0x120
        Float32 MinRotation; // 0x124
        Float32 MaxRotation; // 0x128
        Boolean Enabled; // 0x12C
        Boolean PeerFiltered; // 0x12D
        char pad_0x12E[0x2];
    }; // 0x130
    static_assert(sizeof(DoorControllerEntityData) == 0x130);
}
#pragma pack(pop)