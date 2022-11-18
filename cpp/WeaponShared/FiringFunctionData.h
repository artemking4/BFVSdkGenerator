// Object: FiringFunctionData
// ClassId: 4076
// RuntimeId: 27314
// TypeInfo: 0x0000000144F7AD60
#include "../Core/GameDataContainer.h"
#include "../WeaponShared/WeaponDispersion.h"
#include "../WeaponShared/FireEffectData.h"
#include "../Audio/SoundAsset.h"
#include "../WeaponShared/ShotConfigData.h"
#include "../WeaponShared/FireLogicData.h"
#include "../WeaponShared/AmmoConfigData.h"
#include "../WeaponShared/OverHeatData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WeaponShared {
    class FiringFunctionData : public Core::GameDataContainer {
        WeaponShared::WeaponDispersion WeaponDispersion; // 0x18
        WeaponShared::ShotConfigData Shot; // 0x80
        WeaponShared::OverHeatData OverHeat; // 0x140
        Array<WeaponShared::FireEffectData> PreFireEffects1p; // 0x230
        Array<WeaponShared::FireEffectData> PreFireEffects3p; // 0x238
        Array<WeaponShared::FireEffectData> FireEffects1p; // 0x240
        Array<WeaponShared::FireEffectData> FireEffects3p; // 0x248
        Audio::SoundAsset Sound; // 0x250
        Audio::SoundAsset SoundRemotePlayer; // 0x258
        WeaponShared::FireLogicData FireLogic; // 0x260
        WeaponShared::AmmoConfigData Ammo; // 0x328
        Float32 SelfHealTimeWhenDeployed; // 0x370
        Boolean UsePrimaryAmmo; // 0x374
        Boolean UnlimitedAmmoForAI; // 0x375
        Boolean IsPassiveWeapon; // 0x376
        char pad_0x377[0x9];
    }; // 0x380
    static_assert(sizeof(FiringFunctionData) == 0x380);
}
#pragma pack(pop)