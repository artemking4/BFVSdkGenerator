// Object: CustomGamesSettingsObjectWriterData
// ClassId: 238
// RuntimeId: 62463
// TypeInfo: 0x0000000144D02AA0
#include "../Core/Asset.h"
#include "../CasablancaShared/GameSettingNode.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CustomGamesSettingsObjectWriterData : public Core::Asset {
        CasablancaShared::GameSettingNode Kit1Enabled; // 0x20
        CasablancaShared::GameSettingNode Kit2Enabled; // 0x28
        CasablancaShared::GameSettingNode Kit3Enabled; // 0x30
        CasablancaShared::GameSettingNode Kit4Enabled; // 0x38
        CasablancaShared::GameSettingNode Kit5Enabled; // 0x40
        CasablancaShared::GameSettingNode Kit6Enabled; // 0x48
        CasablancaShared::GameSettingNode EnableMeleeWeapons; // 0x50
        CasablancaShared::GameSettingNode EnableShotguns; // 0x58
        CasablancaShared::GameSettingNode EnableHandguns; // 0x60
        CasablancaShared::GameSettingNode EnableLightMachineGun; // 0x68
        CasablancaShared::GameSettingNode EnableSubMachineGun; // 0x70
        CasablancaShared::GameSettingNode EnableSemiAutoRifle; // 0x78
        CasablancaShared::GameSettingNode EnableSingleActionRifle; // 0x80
        CasablancaShared::GameSettingNode EnableBoltActionCarbines; // 0x88
        CasablancaShared::GameSettingNode EnablePistolCarbines; // 0x90
        CasablancaShared::GameSettingNode EnableMediumMachineGuns; // 0x98
        CasablancaShared::GameSettingNode EnableAntiMaterielRifles; // 0xA0
        CasablancaShared::GameSettingNode EnableAssaultRifles; // 0xA8
        CasablancaShared::GameSettingNode EnableSelfLoadingRifles; // 0xB0
        CasablancaShared::GameSettingNode EnableGadgets; // 0xB8
        CasablancaShared::GameSettingNode EnableAntiVehicleLaunchers; // 0xC0
        CasablancaShared::GameSettingNode EnableAntiInfantryLaunchers; // 0xC8
        CasablancaShared::GameSettingNode EnableAmmoSupplyGadgets; // 0xD0
        CasablancaShared::GameSettingNode EnableHealingSupplyGadgets; // 0xD8
        CasablancaShared::GameSettingNode EnableSelfHealGadgets; // 0xE0
        CasablancaShared::GameSettingNode EnableHandGrenades; // 0xE8
        CasablancaShared::GameSettingNode EnableBuildTools; // 0xF0
        CasablancaShared::GameSettingNode EnableReinforcementGadget; // 0xF8
        CasablancaShared::GameSettingNode EnableExplosives; // 0x100
        CasablancaShared::GameSettingNode OnlySquadLeaderSpawn; // 0x108
        CasablancaShared::GameSettingNode EnableRegenerateHealth; // 0x110
        CasablancaShared::GameSettingNode Enable3PVehicleCamera; // 0x118
        CasablancaShared::GameSettingNode ForceReloadWholeMags; // 0x120
        CasablancaShared::GameSettingNode AimAssistRotationEnabled; // 0x128
        CasablancaShared::GameSettingNode AimAssistSlowdownEnabled; // 0x130
        CasablancaShared::GameSettingNode SoldierRespawnTimeScale; // 0x138
        CasablancaShared::GameSettingNode VehicleRespawnTimeScale; // 0x140
        CasablancaShared::GameSettingNode EnableKillCam; // 0x148
        CasablancaShared::GameSettingNode BulletDamageScale; // 0x150
    }; // 0x158
    static_assert(sizeof(CustomGamesSettingsObjectWriterData) == 0x158);
}
#pragma pack(pop)