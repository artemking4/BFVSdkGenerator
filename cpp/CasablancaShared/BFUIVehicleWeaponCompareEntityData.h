// Object: BFUIVehicleWeaponCompareEntityData
// ClassId: 2320
// RuntimeId: 24064
// TypeInfo: 0x0000000144D809A0
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIVehicleWeaponObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleWeaponCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIVehicleWeaponObject A; // 0x28
        CasablancaShared::BFUIVehicleWeaponObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIVehicleWeaponCompareEntityData) == 0x38);
}
#pragma pack(pop)