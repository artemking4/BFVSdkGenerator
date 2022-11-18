// Object: SoldierHeadCollisionData
// ClassId: 4643
// RuntimeId: 24006
// TypeInfo: 0x0000000144F452B0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../SoldierShared/SoldierHeadCollisionPoseData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierHeadCollisionData : public Core::DataContainer {
        Float32 HeadRadius; // 0x18
        char pad_0x1C[0x4];
        Array<SoldierShared::SoldierHeadCollisionPoseData> PoseStates; // 0x20
    }; // 0x28
    static_assert(sizeof(SoldierHeadCollisionData) == 0x28);
}
#pragma pack(pop)