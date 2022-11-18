// Object: SyncedSoldierSettings
// ClassId: 5031
// RuntimeId: 63840
// TypeInfo: 0x0000000144F44CB0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SyncedSoldierSettings : public Core::SystemSettings {
        Float32 SlipstreamOuterRadius; // 0x20
        Float32 SlipstreamInnerRadius; // 0x24
        Boolean SlipstreamEnabled; // 0x28
        Boolean AimAssistRotationEnabled; // 0x29
        Boolean AimAssistSlowdownEnabled; // 0x2A
        Boolean VaultingOnMovingPlatformEnabled; // 0x2B
        Boolean DisableUpdatesOnShieldedSoldiers; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(SyncedSoldierSettings) == 0x30);
}
#pragma pack(pop)