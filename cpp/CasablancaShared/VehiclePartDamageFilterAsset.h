// Object: VehiclePartDamageFilterAsset
// ClassId: 458
// RuntimeId: 11091
// TypeInfo: 0x0000000144D6CBB0
#include "../Core/DataContainerPolicyAsset.h"
#include "../CasablancaShared/VehiclePartWeaponDamageFilter.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VehiclePartDamageFilterAsset : public Core::DataContainerPolicyAsset {
        Array<CasablancaShared::VehiclePartWeaponDamageFilter> WeaponDamageFilters; // 0x20
    }; // 0x28
    static_assert(sizeof(VehiclePartDamageFilterAsset) == 0x28);
}
#pragma pack(pop)