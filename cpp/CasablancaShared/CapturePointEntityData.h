// Object: CapturePointEntityData
// ClassId: 3276
// RuntimeId: 45374
// TypeInfo: 0x0000000144D032A0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Core/Vec3.h"
#include "../GameShared/TeamId.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/AreaValueTeam.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/CaptureSpeedMultiplierEntry.h"
#include "../Global/CString.h"
#include "../CasablancaShared/CapturePointUIType.h"
#include "../CasablancaShared/CapturePointIconType.h"
#include "../GameShared/UIWorldIconBehavior.h"
#include "../UIIncubatorShared/LocalizedStringId.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class CapturePointEntityData : public Entity::SpatialEntityData {
        Core::Vec3 FlagMeshBottomOffset; // 0x60
        Core::Vec3 FlagMeshTopOffset; // 0x70
        Core::Vec3 PennantMeshOffset; // 0x80
        Array<Entity::ObjectBlueprint> FlagTemplates; // 0x90
        Entity::ObjectBlueprint CapturePoint; // 0x98
        GameShared::TeamId InitialOwnerTeam; // 0xA0
        Float32 CaptureRadius; // 0xA4
        Int32 AreaValue; // 0xA8
        char pad_0xAC[0x4];
        Array<CasablancaShared::AreaValueTeam> AreaValues; // 0xB0
        Int32 TimeToGetControl; // 0xB8
        Int32 TimeToLoseControl; // 0xBC
        GameShared::TeamId FortificationEnabledForTeam; // 0xC0
        Int32 TimeToGetFortification; // 0xC4
        Int32 TimeToLoseFortification; // 0xC8
        Float32 ReturnMultiplier; // 0xCC
        Float32 MaxPlayerDistanceWeight; // 0xD0
        Uint32 MaxDistanceSteps; // 0xD4
        Int32 OnlyTakeableByTeam; // 0xD8
        Int32 MinNrToTakeControl; // 0xDC
        Int32 MaxCaptureMultiplier; // 0xE0
        char pad_0xE4[0x4];
        Array<CasablancaShared::CaptureSpeedMultiplierEntry> CaptureSpeedMultiplierTable; // 0xE8
        Int32 EnemyTicketLossWhenCaptured; // 0xF0
        Uint32 SpawnMenuListOrdinal; // 0xF4
        CString IntruderWarningSID; // 0xF8
        Float32 IconAlpha; // 0x100
        Float32 ShowRadius; // 0x104
        Float32 HideRadius; // 0x108
        Float32 Team1CaptureSpeedMultiplier; // 0x10C
        Float32 Team2CaptureSpeedMultiplier; // 0x110
        CasablancaShared::CapturePointUIType UiType; // 0x114
        CasablancaShared::CapturePointIconType IconType; // 0x118
        Float32 VerticalOffset; // 0x11C
        GameShared::UIWorldIconBehavior IconBehavior; // 0x120
        CString Team1IconName; // 0x128
        CString Team2IconName; // 0x130
        CString LockedIconName; // 0x138
        UIIncubatorShared::LocalizedStringId LocationNameStringId; // 0x140
        CString LocationNameSid; // 0x148
        UIIncubatorShared::LocalizedStringId LocationTextStringId; // 0x150
        CString LocationTextSid; // 0x158
        CString FlagId; // 0x160
        Float32 FlagLocationOverride; // 0x168
        Float32 FortificationTimeOverride; // 0x16C
        Float32 Health; // 0x170
        Float32 MaxHealth; // 0x174
        Boolean Enabled; // 0x178
        Boolean CaptureEnabled; // 0x179
        Boolean InitialSpawnersEnabled; // 0x17A
        Boolean EnableSpawnersOnCapture; // 0x17B
        Boolean TrackPlatoonContribution; // 0x17C
        Boolean AlwaysOutputLocalTeamFlagDirection; // 0x17D
        Boolean IsCapturedInUpperSphere; // 0x17E
        Boolean UseAreaValuesPerTeam; // 0x17F
        Boolean FortificationEnabled; // 0x180
        Boolean FrontLineSpawnEnabled; // 0x181
        Boolean IntruderWarning; // 0x182
        Boolean DisableIfEnemyInside; // 0x183
        Boolean DisableWhenLosingControl; // 0x184
        Boolean ResetTeamIdOnFlagReachingBottom; // 0x185
        Boolean LoseControlWhenNotClose; // 0x186
        Boolean CanSpawnForAllTeams; // 0x187
        Boolean ShowOnMinimap; // 0x188
        Boolean AlwaysVisibleToSpectators; // 0x189
        Boolean TreatCaptureDisabledAsBase; // 0x18A
        Boolean DrawBaseAsForwardBase; // 0x18B
        Boolean HoistFlag; // 0x18C
        Boolean StartAtBottom; // 0x18D
        Boolean RemoveWhenCaptured; // 0x18E
        Boolean SeesawCapturing; // 0x18F
        Boolean PreventCaptureWhenContested; // 0x190
        Boolean ForceSpawnAtVehicle; // 0x191
        Boolean UseMirroredVehicleLayout; // 0x192
        Boolean ForcedBlink; // 0x193
        Boolean CTFBase; // 0x194
        Boolean SetOwnerTeamTriggerCapture; // 0x195
        Boolean UseCheckpoints; // 0x196
        Boolean IsLocked; // 0x197
        char pad_0x198[0x8];
    }; // 0x1A0
    static_assert(sizeof(CapturePointEntityData) == 0x1A0);
}
#pragma pack(pop)