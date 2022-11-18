// Object: PowerToolWeaponData
// ClassId: 5217
// RuntimeId: 36317
// TypeInfo: 0x0000000144D3FED0
#include "../CasablancaShared/BFWeaponData.h"
#include "../Audio/SoundAsset.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/ReconstructionType.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/VehicleRepairModeEnum.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PowerToolWeaponData : public CasablancaShared::BFWeaponData {
        Audio::SoundAsset RepairSound; // 0x28
        Audio::SoundAsset RepairCompletedSound; // 0x30
        Audio::SoundAsset DamageSound; // 0x38
        Entity::MaterialDecl RepairMaterialPair; // 0x40
        char pad_0x44[0x4];
        Array<CasablancaShared::ReconstructionType> ReconstructionTypes; // 0x48
        Float32 RepairHealth; // 0x50
        Float32 RepairArmor; // 0x54
        CasablancaShared::VehicleRepairModeEnum VehicleRepairMode; // 0x58
        Float32 ConstructHealth; // 0x5C
        Int32 DefaultConstructionAnimationType; // 0x60
        Int32 DefaultVehicleRepairAnimationType; // 0x64
        Float32 ReconstructionLineOfSightDistanceFromHit; // 0x68
        Boolean PlayFireEffectOnRepairOnly; // 0x6C
        Boolean RepairAllPartsTogether; // 0x6D
        Boolean RepairVehicles; // 0x6E
        char pad_0x6F[0x1];
    }; // 0x70
    static_assert(sizeof(PowerToolWeaponData) == 0x70);
}
#pragma pack(pop)