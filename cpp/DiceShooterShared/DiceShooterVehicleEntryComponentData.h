// Object: DiceShooterVehicleEntryComponentData
// ClassId: 1775
// RuntimeId: 41810
// TypeInfo: 0x0000000144DF0E50
#include "../GameShared/VehicleEntryComponentData.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../SoldierShared/EnterMode.h"
#include "../SoldierShared/ExitMode.h"
#include "../SoldierShared/TransitionMode.h"
#include "../Global/Float32.h"
#include "../DiceShooterShared/StanceSwitchMapData.h"
#include "../DiceShooterShared/StanceToggleSwitchMapData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class DiceShooterVehicleEntryComponentData : public GameShared::VehicleEntryComponentData {
        Core::LinearTransform AimFollowTransform; // 0x190
        Core::Vec3 VictimOffsetOverride; // 0x1D0
        SoldierShared::EnterMode EntryEnterMode; // 0x1E0
        SoldierShared::ExitMode EntryExitMode; // 0x1E4
        SoldierShared::TransitionMode EntryTransitionMode; // 0x1E8
        Float32 AllowedExitAngle; // 0x1EC
        Array<DiceShooterShared::StanceSwitchMapData> DirectStanceSwitches; // 0x1F0
        DiceShooterShared::StanceToggleSwitchMapData ToggleStanceSwitch; // 0x1F8
        Float32 MouseZoomSensitivity; // 0x208
        Float32 JoystickZoomSensitivity; // 0x20C
        Boolean ShowSoldierWhenShielded; // 0x210
        Boolean ResetAimOnEnter; // 0x211
        Boolean OnlyResetPitch; // 0x212
        Boolean ResetAimInVehicleDirection; // 0x213
        Boolean UpdateAnimatableTransform; // 0x214
        Boolean SetEntryTransformToAnimatable; // 0x215
        Boolean InterpolateToTargetCameraPosition; // 0x216
        Boolean AutoDeployParachuteOnExit; // 0x217
        Boolean AllowRevivableStateOnDeath; // 0x218
        Boolean ExitAllowed; // 0x219
        Boolean ToggleZoom; // 0x21A
        Boolean CanZoom; // 0x21B
        Boolean StartDeathExperienceAtCameraPosition; // 0x21C
        char pad_0x21D[0x3];
    }; // 0x220
    static_assert(sizeof(DiceShooterVehicleEntryComponentData) == 0x220);
}
#pragma pack(pop)