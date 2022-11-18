// Object: PhysicsLocoSettings
// ClassId: 629
// RuntimeId: 63522
// TypeInfo: 0x0000000144C12780
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/AITrackTargetSettings.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class PhysicsLocoSettings : public Core::Asset {
        Float32 Mass; // 0x20
        Float32 WalkSpeed; // 0x24
        Float32 RunSpeed; // 0x28
        Float32 StrafeRunSpeed; // 0x2C
        Float32 BackwardRunSpeed; // 0x30
        Float32 SprintMultiplier; // 0x34
        BattleAIShared::AITrackTargetSettings TrackTargetSettings; // 0x38
        Boolean UseDirectionalRunSpeedBlending; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(PhysicsLocoSettings) == 0x48);
}
#pragma pack(pop)