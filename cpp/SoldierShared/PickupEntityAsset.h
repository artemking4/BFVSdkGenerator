// Object: PickupEntityAsset
// ClassId: 373
// RuntimeId: 26299
// TypeInfo: 0x0000000144F45630
#include "../Core/DataContainerPolicyAsset.h"
#include "../SoldierShared/PickupEntityData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class PickupEntityAsset : public Core::DataContainerPolicyAsset {
        SoldierShared::PickupEntityData Data; // 0x20
    }; // 0x28
    static_assert(sizeof(PickupEntityAsset) == 0x28);
}
#pragma pack(pop)