// Object: GameSettings
// ClassId: 4990
// RuntimeId: 17634
// TypeInfo: 0x0000000144E6D1D0
#include "../Core/SystemSettings.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../GameShared/LogFileCollisionMode.h"
#include "../Global/CString.h"
#include "../GameShared/InputConfigurationAsset.h"
#include "../GameShared/GameModeViewDefinition.h"
#include "../GameShared/TeamId.h"
#include "../GameShared/VersionData.h"
#include "../Entity/SubWorldInclusion.h"
#include "../Global/Float32.h"
#include "../GameShared/PlayerData.h"
#include "../GameShared/DifficultyDatas.h"
#include "../Global/Int32.h"
#include "../GameShared/SKU.h"
#include "../GameShared/GameSettingsComponent.h"
#include "../GameShared/SignificanceSettings.h"
#include "../GameShared/LocalSimulationSettings.h"

#pragma pack(push, 8)
namespace GameShared {
    class GameSettings : public Core::SystemSettings {
        Uint32 MaxPlayerCount; // 0x20
        Uint32 MaxSpectatorCount; // 0x24
        Uint32 MinPlayerCountElimination; // 0x28
        GameShared::LogFileCollisionMode LogFileCollisionMode; // 0x2C
        Uint32 LogFileRotationHistoryLength; // 0x30
        char pad_0x34[0x4];
        CString Level; // 0x38
        CString StartPoint; // 0x40
        CString InstallationLevel; // 0x48
        CString InstallationStartPoint; // 0x50
        CString InstallationDefaultLayerInclusion; // 0x58
        Array<GameShared::InputConfigurationAsset> InputConfiguration; // 0x60
        CString ActiveGameModeViewDefinition; // 0x68
        Array<GameShared::GameModeViewDefinition> GameModeViewDefinitions; // 0x70
        GameShared::TeamId DefaultTeamId; // 0x78
        Uint32 PS3ContentRatingAge; // 0x7C
        Uint32 LogHistory; // 0x80
        char pad_0x84[0x4];
        GameShared::VersionData Version; // 0x88
        Entity::SubWorldInclusion LayerInclusionTable; // 0x90
        CString DefaultLayerInclusion; // 0x98
        Float32 TimeBeforeSpawnIsAllowed; // 0xA0
        Float32 LevelWarmUpTime; // 0xA4
        Float32 TimeToWaitForQuitTaskCompletion; // 0xA8
        char pad_0xAC[0x4];
        GameShared::PlayerData Player; // 0xB0
        GameShared::DifficultyDatas DifficultySettings; // 0xB8
        Int32 DifficultyIndex; // 0xC0
        GameShared::SKU CurrentSKU; // 0xC4
        Array<GameShared::GameSettingsComponent> GameSettingsComponents; // 0xC8
        Float32 HistoryMaxProjectileDistance; // 0xD0
        Float32 ArbitrationExpirationTime; // 0xD4
        GameShared::SignificanceSettings SignificanceSettings; // 0xD8
        GameShared::LocalSimulationSettings LocalSimulationSettings; // 0xF4
        Boolean LogFileEnable; // 0x100
        Boolean ResourceRefreshAlwaysAllowed; // 0x101
        Boolean SpawnMaxLocalPlayersOnStartup; // 0x102
        Boolean UseSpeedBasedDetailedCollision; // 0x103
        Boolean UseSingleWeaponSelector; // 0x104
        Boolean AutoAimEnabled; // 0x105
        Boolean HasUnlimitedAmmo; // 0x106
        Boolean HasUnlimitedMags; // 0x107
        Boolean RotateLogs; // 0x108
        Boolean AdjustVehicleCenterOfMass; // 0x109
        Boolean AimAssistEnabled; // 0x10A
        Boolean AimAssistUsePolynomials; // 0x10B
        Boolean ForceFreeStreaming; // 0x10C
        Boolean ForceDisableFreeStreaming; // 0x10D
        Boolean IsGodMode; // 0x10E
        Boolean IsJesusMode; // 0x10F
        Boolean IsJesusModeAi; // 0x110
        Boolean CoreParallelDispatchJobsEnabled; // 0x111
        Boolean DisableFBInspector; // 0x112
        Boolean GameAdministrationEnabled; // 0x113
        Boolean AllowDestructionOutsideCombatArea; // 0x114
        Boolean DefaultCameraInheritsFov; // 0x115
        Boolean DisablePreRound; // 0x116
        Boolean ScriptedPlaythrough; // 0x117
        Boolean ScriptedFlythrough; // 0x118
        Boolean EnableFriendlyFireHitMarkers; // 0x119
        Boolean ServerPerEntityQueryEnabled; // 0x11A
        Boolean ServerUpdateJobsEnabled; // 0x11B
        char pad_0x11C[0x4];
    }; // 0x120
    static_assert(sizeof(GameSettings) == 0x120);
}
#pragma pack(pop)