// Object: SoldierEntryComponentData
// ClassId: 1772
// RuntimeId: 29541
// TypeInfo: 0x0000000144F39D90
#include "../GameShared/CharacterEntryComponentData.h"
#include "../GameShared/AntEnumeration.h"
#include "../Core/Vec3.h"
#include "../SoldierShared/AimingWorldSpaceLockEfficiencyData.h"
#include "../Global/Float32.h"
#include "../SoldierShared/EnterMode.h"
#include "../SoldierShared/ExitMode.h"
#include "../SoldierShared/TransitionMode.h"
#include "../Global/Boolean.h"
#include "../GameShared/AimingConstraintsData.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierEntryComponentData : public GameShared::CharacterEntryComponentData {
        Core::Vec3 AnimationAccelerationMultiplier; // 0x130
        GameShared::AntEnumeration AntEntryEnumeration; // 0x140
        GameShared::AntEnumeration AntVehicleEnumeration; // 0x148
        GameShared::AntEnumeration AntSeatEnumeration; // 0x150
        SoldierShared::AimingWorldSpaceLockEfficiencyData WorldSpaceLockEfficiency; // 0x158
        Float32 OverrideYawEfficiency; // 0x168
        Float32 OverridePitchEfficiency; // 0x16C
        Float32 OverrideYawEfficiencyZoom; // 0x170
        Float32 OverridePitchEfficiencyZoom; // 0x174
        SoldierShared::EnterMode EntryEnterMode; // 0x178
        SoldierShared::ExitMode EntryExitMode; // 0x17C
        SoldierShared::TransitionMode EntryTransitionMode; // 0x180
        Float32 AllowedExitAngle; // 0x184
        GameShared::AimingConstraintsData FiringConstraints; // 0x188
        Boolean LeaveSoldierInPlace; // 0x198
        Boolean AllowRevivableStateOnDeath; // 0x199
        Boolean ClampSoldierOffsetToBoundingBox; // 0x19A
        Boolean ClampSoldierYOffsetToFloor; // 0x19B
        Boolean HideVehicleHud; // 0x19C
        Boolean UseFiringConstraints; // 0x19D
        char pad_0x19E[0x2];
    }; // 0x1A0
    static_assert(sizeof(SoldierEntryComponentData) == 0x1A0);
}
#pragma pack(pop)