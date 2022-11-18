// Object: ResupplyVehicleWeaponData
// ClassId: 5224
// RuntimeId: 53648
// TypeInfo: 0x0000000144D01E20
#include "../CasablancaShared/BFWeaponData.h"
#include "../SoldierShared/VehicleAmmoType.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ResupplyVehicleWeaponData : public CasablancaShared::BFWeaponData {
        SoldierShared::VehicleAmmoType AmmoType; // 0x28
        char pad_0x2C[0x4];
        Audio::SoundAsset ResupplySound; // 0x30
        Float32 SoundKeepAliveTimer; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(ResupplyVehicleWeaponData) == 0x40);
}
#pragma pack(pop)