// Object: SharedAmmoList
// ClassId: 385
// RuntimeId: 23242
// TypeInfo: 0x0000000144F44BB0
#include "../Core/DataContainerPolicyAsset.h"
#include "../SoldierShared/AmmoPouch.h"
#include "../Global/Float32.h"
#include "../SoldierShared/SharedWeaponAmmoDefinition.h"
#include "../SoldierShared/VehicleAmmoTypeDefinition.h"
#include "../SoldierShared/GadgetLimitDefinition.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SharedAmmoList : public Core::DataContainerPolicyAsset {
        Array<SoldierShared::AmmoPouch> Pouches; // 0x20
        Float32 MaxWeight; // 0x28
        char pad_0x2C[0x4];
        Array<SoldierShared::SharedWeaponAmmoDefinition> WeaponAmmos; // 0x30
        Array<SoldierShared::VehicleAmmoTypeDefinition> VehicleAmmos; // 0x38
        Array<SoldierShared::GadgetLimitDefinition> GadgetLimits; // 0x40
    }; // 0x48
    static_assert(sizeof(SharedAmmoList) == 0x48);
}
#pragma pack(pop)