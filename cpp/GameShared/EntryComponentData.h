// Object: EntryComponentData
// ClassId: 1770
// RuntimeId: 14257
// TypeInfo: 0x0000000144E82740
#include "../Entity/GameComponentData.h"
#include "../GameShared/EntryClass.h"
#include "../GameShared/GameAIEntryData.h"
#include "../Global/Boolean.h"
#include "../GameShared/EntryInputActionMapsData.h"
#include "../Global/Int32.h"
#include "../GameShared/InputActionMappingsData.h"
#include "../GameShared/InputCurveData.h"
#include "../Global/Float32.h"
#include "../GameShared/EntryComponentHudData.h"
#include "../GameShared/ExplicitEntryPoint.h"
#include "../Core/Vec3.h"
#include "../GameShared/EntrySpottingSettings.h"
#include "../GameShared/PoseConstraintsData.h"

#pragma pack(push, 16)
namespace GameShared {
    class EntryComponentData : public Entity::GameComponentData {
        Core::Vec3 ClearPathToExitPointStartOffset; // 0x80
        Core::Vec3 SoldierOffset; // 0x90
        GameShared::EntryClass EntryClass; // 0xA0
        char pad_0xA4[0x4];
        GameShared::GameAIEntryData AIData; // 0xA8
        GameShared::EntryInputActionMapsData InputConceptDefinition; // 0xB0
        Int32 ActionMapSettingsFlipYSchemeOverride; // 0xB8
        char pad_0xBC[0x4];
        GameShared::InputActionMappingsData InputMapping; // 0xC0
        Array<GameShared::InputCurveData> InputCurves; // 0xC8
        Float32 MouseSensitivity; // 0xD0
        Float32 JoystickSensitivity; // 0xD4
        GameShared::EntryComponentHudData HudData; // 0xD8
        Int32 EntryOrderNumber; // 0xE8
        Float32 EnterImpulse; // 0xEC
        Float32 EntryRadius; // 0xF0
        char pad_0xF4[0x4];
        Array<GameShared::ExplicitEntryPoint> ExplicitEntryPoints; // 0xF8
        Float32 ExplosionBlastDamageScale; // 0x100
        GameShared::EntrySpottingSettings EntrySpottingSettings; // 0x104
        Int32 TriggerEventOnKey; // 0x108
        Int32 CameraIndex; // 0x10C
        Boolean ForbiddenForHuman; // 0x110
        Boolean BlockEntryWhenOccupied; // 0x111
        Boolean IsAllowedToExitInAir; // 0x112
        Boolean IsShielded; // 0x113
        Boolean LockSoldierAimingToEntry; // 0x114
        Boolean ShowSoldierInEntry; // 0x115
        Boolean Show1pSoldierInEntry; // 0x116
        Boolean CopyAimerYawToRotation; // 0x117
        Boolean ShowSoldierWeaponInEntry; // 0x118
        Boolean Show1pSoldierInEntryForPlayerOnly; // 0x119
        Boolean Show3pSoldierWeaponInEntry; // 0x11A
        Boolean ShowSoldierGearInEntry; // 0x11B
        GameShared::PoseConstraintsData PoseConstraints; // 0x11C
        Boolean AllowRagdollFromEntry; // 0x11F
    }; // 0x120
    static_assert(sizeof(EntryComponentData) == 0x120);
}
#pragma pack(pop)