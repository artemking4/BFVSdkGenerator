// Object: SetCustomGamesSettingEntityData
// ClassId: 3196
// RuntimeId: 54353
// TypeInfo: 0x0000000144D35EB0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SetCustomGamesSettingEntityData : public Entity::EntityData {
        Float32 SetSoldierRespawnTimeScale; // 0x20
        Float32 SetVehicleRespawnTimeScale; // 0x24
        Float32 SetBulletDamageScale; // 0x28
        Boolean EnableAssaultKit; // 0x2C
        Boolean EnableMedicKit; // 0x2D
        Boolean EnableSupportKit; // 0x2E
        Boolean EnableScoutKit; // 0x2F
        Boolean EnableTankerKit; // 0x30
        Boolean EnablePilotKit; // 0x31
        Boolean EnableMeleeWeapons; // 0x32
        Boolean EnableShotguns; // 0x33
        Boolean EnableHandguns; // 0x34
        Boolean EnableLightMachineGuns; // 0x35
        Boolean EnableSubmachineGuns; // 0x36
        Boolean EnableSemiAutoRifles; // 0x37
        Boolean EnableSingleActionRifles; // 0x38
        Boolean EnableBoltActionCarbines; // 0x39
        Boolean EnablePistolCarbines; // 0x3A
        Boolean EnableMediumMachineGuns; // 0x3B
        Boolean EnableAntiMaterielRifles; // 0x3C
        Boolean EnableAssaultRifles; // 0x3D
        Boolean EnableSelfLoadingRifles; // 0x3E
        Boolean EnableGadgets; // 0x3F
        Boolean EnableAntiVehicleLaunchers; // 0x40
        Boolean EnableAntiInfantryLaunchers; // 0x41
        Boolean EnableAmmoSupplyGadgets; // 0x42
        Boolean EnableHealingSupplyGadgets; // 0x43
        Boolean EnableSelfHealGadgets; // 0x44
        Boolean EnableHandGrenades; // 0x45
        Boolean EnableBuildTools; // 0x46
        Boolean EnableReinforcementGadget; // 0x47
        Boolean EnableExplosives; // 0x48
        Boolean EnableOnlySquadLeaderSpawn; // 0x49
        Boolean EnableKillCam; // 0x4A
        Boolean EnableRegenerateHealth; // 0x4B
        Boolean Enable3pVehicleCamera; // 0x4C
        Boolean EnableAimAssistRotation; // 0x4D
        Boolean EnableAimAssistSlowdown; // 0x4E
        Boolean EnableForceReloadWholeMags; // 0x4F
    }; // 0x50
    static_assert(sizeof(SetCustomGamesSettingEntityData) == 0x50);
}
#pragma pack(pop)