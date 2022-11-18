// Object: ServerSettings
// ClassId: 5020
// RuntimeId: 17626
// TypeInfo: 0x0000000144E90D60
#include "../Core/SystemSettings.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/CongestionControlSettings.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class ServerSettings : public Core::SystemSettings {
        CString InstancePath; // 0x20
        Uint32 RemoteControlPort; // 0x28
        Uint32 MaxQueriesPerSecond; // 0x2C
        CString SavePoint; // 0x30
        Float32 TimeoutTime; // 0x38
        Uint32 PlayerCountNeededForMultiplayer; // 0x3C
        CString DebugMenuClick; // 0x40
        Float32 JuiceTimeThreshold; // 0x48
        char pad_0x4C[0x4];
        CString JuiceReportPerformanceCategory; // 0x50
        GameShared::CongestionControlSettings CongestionCtrl; // 0x58
        Float32 LoadingTimeout; // 0x94
        Float32 IngameTimeout; // 0x98
        Float32 OutgoingFrequency; // 0x9C
        Float32 OutgoingHighFrequency; // 0xA0
        Float32 OutgoingFrequencyForSpectators; // 0xA4
        Float32 OutgoingHighFrequencyCap; // 0xA8
        Uint32 IncomingRate; // 0xAC
        Uint32 OutgoingRate; // 0xB0
        Int32 MaxSingleSteppingDeferredQueueSize; // 0xB4
        Int32 MinSingleSteppingDeferredQueueLatencyMs; // 0xB8
        Int32 SingleSteppingDeferredInputDiff; // 0xBC
        Int32 MaxLagSwitchProtectionDelay; // 0xC0
        Uint32 OutgoingHighFrequencyRate; // 0xC4
        CString Playlist; // 0xC8
        Int32 DedicatedServerCpu; // 0xD0
        Uint32 SaveGameVersion; // 0xD4
        CString ServerName; // 0xD8
        CString ServerPassword; // 0xE0
        Float32 VehicleRespawnTimeScale; // 0xE8
        Float32 SoldierRespawnTimeScale; // 0xEC
        Int32 MaxVehicleSpawnInFrame; // 0xF0
        Int32 MaxVehicleUnSpawnInFrame; // 0xF4
        CString AdministrationPassword; // 0xF8
        CString RemoteAdministrationPort; // 0x100
        Float32 ServerFpsStallThreshold; // 0x108
        Float32 WaitingForGhostsTimeout; // 0x10C
        Float32 MaxClientAuthoritativeMovementDistance; // 0x110
        Float32 ClientAuthoritativeMovementResetThreshold; // 0x114
        Float32 ClientAuthoritativeMovementAllowedTime; // 0x118
        Float32 SoldierExtrapolBlendingLatencyThreshold; // 0x11C
        CString ActiveLicenses; // 0x120
        Float32 SoldierDefaultMoveSpeedMultiplier; // 0x128
        Float32 SoldierDefaultSprintSpeedMultiplier; // 0x12C
        Uint32 DedicatedServerMaxReceiveJobCount; // 0x130
        Boolean QueryProviderEnabled; // 0x134
        Boolean DebrisClusterEnabled; // 0x135
        Boolean VegetationEnabled; // 0x136
        Boolean WaterPhysicsEnabled; // 0x137
        Boolean IsDesertingAllowed; // 0x138
        Boolean DestroyVehiclesOutsideCombatAreaOnDisable; // 0x139
        Boolean IsRenderDamageEvents; // 0x13A
        Boolean RespawnOnDeathPosition; // 0x13B
        Boolean IsStatsEnabled; // 0x13C
        Boolean IsNetworkStatsEnabled; // 0x13D
        Boolean IsAiEnabled; // 0x13E
        Boolean IsDestructionEnabled; // 0x13F
        Boolean IsSoldierAnimationEnabled; // 0x140
        Boolean IsSoldierDetailedCollisionEnabled; // 0x141
        Boolean LoadSavePoint; // 0x142
        Boolean DisableCutscenes; // 0x143
        Boolean HavokVisualDebugger; // 0x144
        Boolean HavokCaptureToFile; // 0x145
        Boolean ShowTriggerDebugText; // 0x146
        Boolean TimeoutGame; // 0x147
        Boolean AILooksIntoCamera; // 0x148
        Boolean DeathmatchDebugInfo; // 0x149
        Boolean VehicleInteractionIgnoresSeeThrough; // 0x14A
        Boolean SendSpawnerEnemyRaycastTelemetry; // 0x14B
        Boolean JuiceReportPerformanceEnabled; // 0x14C
        Boolean JuiceReportMemoryEnabled; // 0x14D
        Boolean JobEnable; // 0x14E
        Boolean ThreadingEnable; // 0x14F
        Boolean DrawActivePhysicsObjects; // 0x150
        Boolean IsRanked; // 0x151
        Boolean UnlockResolver; // 0x152
        Boolean ScoringLogEnabled; // 0x153
        Boolean ServerStallSmoothingEnabled; // 0x154
        Boolean ForcePlaylist; // 0x155
        Boolean AutoUnspawnBangers; // 0x156
        Boolean RegulatedAIThrottle; // 0x157
        Boolean EnableAnimationCulling; // 0x158
        Boolean FallBackToSquadSpawn; // 0x159
        Boolean SaveGameUseProfileSaves; // 0x15A
        Boolean VehicleSpawnAllowed; // 0x15B
        Boolean AdministrationEnabled; // 0x15C
        Boolean AdministrationLogEnabled; // 0x15D
        Boolean AdministrationTimeStampLogNames; // 0x15E
        Boolean AdministrationEventsEnabled; // 0x15F
        Boolean AdministrationServerNameRestricted; // 0x160
        Boolean ExtendedJuiceLoggingEnabled; // 0x161
        Boolean HostMigrationOnMaintenanceEnabled; // 0x162
        Boolean DeferBulletActivationEnabled; // 0x163
        Boolean AllowChecksumCheatDamage; // 0x164
        Boolean AllowSpawnOnEnemyTeam; // 0x165
        Boolean ForceUnlockMatchForArbitration; // 0x166
        Boolean DedicatedServerRunParallelSingleStepControllables; // 0x167
        Boolean DedicatedServerRunParallelReceive; // 0x168
        Boolean DedicatedServerRunParallelSingleStepControllablesAssertNoDuplicates; // 0x169
        char pad_0x16A[0x6];
    }; // 0x170
    static_assert(sizeof(ServerSettings) == 0x170);
}
#pragma pack(pop)