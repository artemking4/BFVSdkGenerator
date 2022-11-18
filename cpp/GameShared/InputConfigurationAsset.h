// Object: InputConfigurationAsset
// ClassId: 536
// RuntimeId: 21201
// TypeInfo: 0x0000000144E6C3D0
#include "../Core/Asset.h"
#include "../GameShared/EntryInputActionMapsData.h"
#include "../GameShared/InputConceptIdentifiers.h"
#include "../Global/Boolean.h"
#include "../GameShared/EntryInputActionBindingsData.h"
#include "../GameShared/EditableActionMap.h"
#include "../GameShared/UIInputActionDataAsset.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../GameShared/PoseTransition.h"

#pragma pack(push, 8)
namespace GameShared {
    class InputConfigurationAsset : public Core::Asset {
        Array<GameShared::EntryInputActionMapsData> DefaultInputConceptDefinitions; // 0x20
        Array<GameShared::InputConceptIdentifiers> DefaultExclusiveInputConcepts; // 0x28
        GameShared::EntryInputActionBindingsData EntryInputActionBindings; // 0x30
        Array<GameShared::EditableActionMap> UserConfigurableActionMaps; // 0x38
        GameShared::UIInputActionDataAsset UIInputActions; // 0x40
        Int32 TogglePoseAction; // 0x48
        Int32 CrouchAction; // 0x4C
        Int32 CrouchAndHoldAction; // 0x50
        Int32 PickupInteractionAction; // 0x54
        Int32 PickupInteractionActionKeyboard; // 0x58
        Float32 SprintReleaseTime; // 0x5C
        Float32 ThrottleInputRequiredForSprint; // 0x60
        Float32 VehicleBoostIsToggleMinInput; // 0x64
        Float32 EnterVehicleHoldTime; // 0x68
        char pad_0x6C[0x4];
        Array<GameShared::PoseTransition> FiringDisablingTransitions; // 0x70
        Boolean ReverseInputConceptExclusion; // 0x78
        Boolean ProneToStandOnJump; // 0x79
        Boolean StandAutomaticallyIfSprinting; // 0x7A
        Boolean DisableCrouch; // 0x7B
        Boolean DisableProne; // 0x7C
        Boolean DisableCrawlingWhileFiring; // 0x7D
        Boolean DisableCrawlingWhileReloading; // 0x7E
        Boolean DisableFiringWhileDeployingBipod; // 0x7F
        Boolean DisableFiringWhileJumping; // 0x80
        Boolean DisableSprintingWhileReloading; // 0x81
        Boolean EnableSprintToCrouchTransition; // 0x82
        Boolean StopSprintingWhenReleasingThrottle; // 0x83
        Boolean StopSprintingWhenReleasingSprint; // 0x84
        Boolean WaitForSprintReleaseBeforeSprintAgain; // 0x85
        Boolean VehicleBoostIsToggle; // 0x86
        Boolean InputCurvesEnabled; // 0x87
    }; // 0x88
    static_assert(sizeof(InputConfigurationAsset) == 0x88);
}
#pragma pack(pop)