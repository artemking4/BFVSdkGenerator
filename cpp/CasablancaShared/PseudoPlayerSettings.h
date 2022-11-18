// Object: PseudoPlayerSettings
// ClassId: 5012
// RuntimeId: 28249
// TypeInfo: 0x0000000144D31220
#include "../Core/SystemSettings.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PseudoPlayerSettings : public Core::SystemSettings {
        Int32 SpawnCount; // 0x20
        Int32 SpectatorCount; // 0x24
        Float32 LoginRate; // 0x28
        Float32 RespawnDelay; // 0x2C
        Float32 SuicideInitialDelay; // 0x30
        Float32 SuicideRate; // 0x34
        Float32 ReconnectRate; // 0x38
        Float32 ScoreRate; // 0x3C
        Float32 DamageRate; // 0x40
        Float32 KillRate; // 0x44
        Float32 PurchaseRate; // 0x48
        Int32 ForceKitId; // 0x4C
        Boolean AutomaticSpawn; // 0x50
        Boolean ActivateInput; // 0x51
        Boolean OverrideExternalControl; // 0x52
        Boolean CanSingleStep; // 0x53
        Boolean SetOnlineId; // 0x54
        Boolean AllLicenses; // 0x55
        Boolean BlazeAware; // 0x56
        Boolean RandomizeSpawnPoint; // 0x57
        Boolean ForceSpawnOnHuman; // 0x58
        Boolean Aiming; // 0x59
        char pad_0x5A[0x6];
    }; // 0x60
    static_assert(sizeof(PseudoPlayerSettings) == 0x60);
}
#pragma pack(pop)