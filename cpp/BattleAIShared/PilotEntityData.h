// Object: PilotEntityData
// ClassId: 3000
// RuntimeId: 53765
// TypeInfo: 0x0000000144C19BB0
#include "../BattleAIShared/PilotEntityBaseData.h"
#include "../GameShared/PID.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class PilotEntityData : public BattleAIShared::PilotEntityBaseData {
        GameShared::PID PitchPID; // 0x28
        GameShared::PID YawPID; // 0x48
        GameShared::PID RollPID; // 0x68
        GameShared::PID ThrottlePID; // 0x88
        Float32 MaxPitchAngleDiff; // 0xA8
        Float32 MaxYawAngleDiff; // 0xAC
        Float32 MinDistance; // 0xB0
        Float32 MaximumPitchVelocity; // 0xB4
        Float32 MaximumYawVelocity; // 0xB8
        Float32 SecondDistance; // 0xBC
        Float32 MaxPitchAngleDiffSecond; // 0xC0
        Float32 MaxYawAngleDiffSecond; // 0xC4
        Float32 MaximumPitchVelocitySecond; // 0xC8
        Float32 MaximumYawVelocitySecond; // 0xCC
        Float32 Dist0; // 0xD0
        Float32 YOffset0; // 0xD4
        Float32 Dist1; // 0xD8
        Float32 YOffset1; // 0xDC
        Float32 Dist2; // 0xE0
        Float32 YOffset2; // 0xE4
        Boolean AutoLevelOutRoll; // 0xE8
        char pad_0xE9[0x7];
    }; // 0xF0
    static_assert(sizeof(PilotEntityData) == 0xF0);
}
#pragma pack(pop)