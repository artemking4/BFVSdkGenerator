// Object: SyncedGameSettings
// ClassId: 5030
// RuntimeId: 8066
// TypeInfo: 0x0000000144E6D150
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../GameShared/SyncedLocalSimulationSettings.h"
#include "../GameShared/ChassisCorrectionCacheDeltaLimits.h"
#include "../GameShared/GameOptimizations.h"

#pragma pack(push, 8)
namespace GameShared {
    class SyncedGameSettings : public Core::SystemSettings {
        Uint32 DifficultyIndex; // 0x20
        Float32 ManDownTimeModifier; // 0x24
        Float32 BulletDamageModifier; // 0x28
        Float32 MaxAllowedLatency; // 0x2C
        Float32 SpectatorDelay; // 0x30
        Uint32 MoveManagerOutgoingFrequencyDivider; // 0x34
        Uint32 MoveManagerSinglePlayerOutgoingFrequencyDivider; // 0x38
        Uint32 MaxCorrectionUpdateCount; // 0x3C
        Float32 FrameHistoryTime; // 0x40
        Float32 FrameHistoryTimeSoldier; // 0x44
        Float32 AllowedMaxLatencyForLock; // 0x48
        Int32 VehicleDamageModel; // 0x4C
        Float32 FriendlyGrenadeIgnoreCollisionRadius; // 0x50
        GameShared::ChassisCorrectionCacheDeltaLimits ChassisCorrectionCacheDeltaLimits; // 0x54
        Boolean Enable3PVehicleCamera; // 0x64
        Boolean EnableRegenerateHealth; // 0x65
        Boolean EnableFriendlyFire; // 0x66
        Boolean AllowClientSideDamageArbitration; // 0x67
        Boolean ForceReloadWholeMags; // 0x68
        Boolean EnableAutomaticCorrectionUpdateCount; // 0x69
        Boolean UseServerSideHitDetectionForHighPing; // 0x6A
        Boolean LockLatency; // 0x6B
        Boolean LocalVehicleSimulationForTowablesOnly; // 0x6C
        GameShared::SyncedLocalSimulationSettings SyncedLocalSimulationSettings; // 0x6D
        GameShared::GameOptimizations Optimizations; // 0x73
        char pad_0x74[0x4];
    }; // 0x78
    static_assert(sizeof(SyncedGameSettings) == 0x78);
}
#pragma pack(pop)