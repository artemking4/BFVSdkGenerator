// Object: ScriptedMotionPhysicsActionData
// ClassId: 2963
// RuntimeId: 2434
// TypeInfo: 0x0000000144DED520
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../DiceShooterShared/ScriptedMotionInput.h"
#include "../DiceShooterShared/ScriptedMotionData.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class ScriptedMotionPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        char pad_0x58[0x8];
        Core::LinearTransform CameraTransformHint; // 0x60
        Array<DiceShooterShared::ScriptedMotionInput> InputCombo; // 0xA0
        Array<DiceShooterShared::ScriptedMotionData> ScriptedMotion; // 0xA8
        Uint32 ScriptTickLength; // 0xB0
        Uint32 AngularSmoothingTicks; // 0xB4
        Uint32 LinearSmoothingTicks; // 0xB8
        Boolean DisableScriptTriggering; // 0xBC
        Boolean AutoLevelRoll; // 0xBD
        Boolean AutoLevelAlwaysUp; // 0xBE
        char pad_0xBF[0x1];
    }; // 0xC0
    static_assert(sizeof(ScriptedMotionPhysicsActionData) == 0xC0);
}
#pragma pack(pop)