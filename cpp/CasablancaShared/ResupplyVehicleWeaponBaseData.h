// Object: ResupplyVehicleWeaponBaseData
// ClassId: 5221
// RuntimeId: 57352
// TypeInfo: 0x0000000144D01DA0
#include "../CasablancaShared/BFWeaponData.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ResupplyVehicleWeaponBaseData : public CasablancaShared::BFWeaponData {
        Audio::SoundAsset ResupplySound; // 0x28
        Float32 SoundKeepAliveTimer; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ResupplyVehicleWeaponBaseData) == 0x38);
}
#pragma pack(pop)