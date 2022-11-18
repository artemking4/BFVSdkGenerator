// Object: SoldierWeaponData
// ClassId: 3344
// RuntimeId: 52963
// TypeInfo: 0x0000000144F442B0
#include "../SoldierShared/WeaponEntityData.h"
#include "../Global/CString.h"
#include "../SoldierShared/WeaponZoomLevelData.h"
#include "../SoldierShared/WeaponModifierData.h"
#include "../SoldierShared/SoldierAimingSimulationData.h"
#include "../SoldierShared/FirstPersonCameraData.h"
#include "../SoldierShared/WeaponSprintSettings.h"
#include "../SoldierShared/WeaponControlChannels.h"
#include "../GameShared/HudData.h"
#include "../SoldierShared/PickupSettingsData.h"
#include "../SoldierShared/WeaponAnimBaseSetEnum.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../SoldierShared/QuickThrowTypeEnum.h"
#include "../SoldierShared/SoldierWeaponBlueprint.h"
#include "../SoldierShared/SoldierWeaponPartSocket.h"
#include "../Global/Int32.h"
#include "../Audio/EntityVoiceOverInfo.h"
#include "../SoldierShared/CustomizationAccessoryPivots.h"
#include "../Core/LinearTransform.h"
#include "../SoldierShared/SocketData.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierWeaponData : public SoldierShared::WeaponEntityData {
        SoldierShared::PickupSettingsData PickupSettings; // 0xC0
        Core::Vec3 InteractionOffset; // 0xF0
        SoldierShared::CustomizationAccessoryPivots CustomizationAccessoryPivots; // 0x100
        Core::LinearTransform CustomizationTransform; // 0x150
        CString DamageGiverName; // 0x190
        Array<SoldierShared::WeaponZoomLevelData> ZoomLevels; // 0x198
        Array<SoldierShared::WeaponModifierData> WeaponModifierData; // 0x1A0
        SoldierShared::SoldierAimingSimulationData AimingController; // 0x1A8
        SoldierShared::FirstPersonCameraData FirstPersonCamera; // 0x1B0
        SoldierShared::WeaponSprintSettings SprintSettings; // 0x1B8
        SoldierShared::WeaponControlChannels CharacterStateWeaponControl; // 0x1C0
        Array<GameShared::HudData> Hud; // 0x1E0
        SoldierShared::WeaponAnimBaseSetEnum AnimBaseSet; // 0x1E8
        Float32 SwitchToPrimaryWhenDropOrDestroyPickupOnKillDelay; // 0x1EC
        Float32 SwitchToPrimaryWhenOutOfAmmoDelay; // 0x1F0
        Float32 WaitForZoomOutBeforeSwitchToPrimaryWhenOutOfAmmoDelay; // 0x1F4
        SoldierShared::QuickThrowTypeEnum QuickThrowType; // 0x1F8
        char pad_0x1FC[0x4];
        SoldierShared::SoldierWeaponBlueprint SoldierWeaponBlueprint; // 0x200
        CString PersistenceId; // 0x208
        Array<SoldierShared::SoldierWeaponPartSocket> WeaponPartSockets; // 0x210
        Int32 SecondaryActionInputAction; // 0x218
        char pad_0x21C[0x4];
        Audio::EntityVoiceOverInfo VoiceOverInfo; // 0x220
        Float32 WeaponFloatParam; // 0x228
        Float32 MaxRangeMeterDistance; // 0x22C
        Int32 SwitchToCloneWeaponOnInput; // 0x230
        char pad_0x234[0x4];
        Array<SoldierShared::SocketData> SocketsInWeapon; // 0x238
        Boolean HideWhenOutOfAmmo; // 0x240
        Boolean DestroyPickupInsteadOfDropping; // 0x241
        Boolean DestroyWhenOutOfAmmo; // 0x242
        Boolean DropOrDestroyPickupOnKill; // 0x243
        Boolean AllowSwitchingToWeaponOutOfAmmo; // 0x244
        Boolean AllowSwitchingToWeaponReloading; // 0x245
        Boolean AllowPeekOverCover; // 0x246
        Boolean AllowPeekHorizontallyAroundCover; // 0x247
        Boolean SwitchToPrimaryWhenOutOfAmmo; // 0x248
        Boolean SwitchToCloneWhenOutOfAmmo; // 0x249
        Boolean WaitForFireBeforeSwitchToPrimaryWhenOutOfAmmo; // 0x24A
        Boolean WaitForZoomOutBeforeSwitchToPrimaryWhenOutOfAmmo; // 0x24B
        Boolean FireAndSwitchBackToPrevSupported; // 0x24C
        Boolean AllowSwitchingToWeaponInVehicles; // 0x24D
        Boolean AllowSwitchingToWeaponInWater; // 0x24E
        Boolean AllowSwitchingToWeaponWhenJumping; // 0x24F
        Boolean AllowSwitchingToWeaponWhenFalling; // 0x250
        Boolean AllowFiringWhileSprinting; // 0x251
        Boolean IsOneHanded; // 0x252
        Boolean LowerOnOwnTeam; // 0x253
        Boolean RedeployWhenSwitchingWeaponStates; // 0x254
        Boolean UseQuickThrowOnAutomaticSwitchback; // 0x255
        Boolean EnableBreathControl; // 0x256
        Boolean CanBeInSupportedShooting; // 0x257
        Boolean PreventDroppingOfKit; // 0x258
        Boolean UseDetailedRangeMeterQuery; // 0x259
        Boolean SkipFirstZoomLevel; // 0x25A
        Boolean SupportIsRequiredForShooting; // 0x25B
        Boolean SupportIsRequiredForZooming; // 0x25C
        Boolean CopyCloneWeaponAmmo; // 0x25D
        Boolean CopyCloneWeaponMags; // 0x25E
        Boolean AllowCloneWeaponSwitchingFireModeDuringReload; // 0x25F
        Boolean AllowCloneWeaponSwitchingFireModeDuringReloadDelay; // 0x260
        char pad_0x261[0xF];
    }; // 0x270
    static_assert(sizeof(SoldierWeaponData) == 0x270);
}
#pragma pack(pop)