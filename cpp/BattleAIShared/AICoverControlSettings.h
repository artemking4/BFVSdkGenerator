// Object: AICoverControlSettings
// ClassId: 132
// RuntimeId: 14429
// TypeInfo: 0x0000000144C06460
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/CoverSideStepData.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AICoverControlSettings : public Core::Asset {
        Array<Float32> FiringTimes; // 0x20
        Array<Float32> IdleTimes; // 0x28
        Float32 SuppressionThreshold; // 0x30
        char pad_0x34[0x4];
        BattleAIShared::CoverSideStepData SideStepDataOverride; // 0x38
        Float32 TimeOutFiringBeforeAllowProjectile; // 0x40
        Boolean AllowSuppression; // 0x44
        Boolean AllowOpenCoverCrouch; // 0x45
        Boolean AllowOpenCoverStand; // 0x46
        char pad_0x47[0x1];
    }; // 0x48
    static_assert(sizeof(AICoverControlSettings) == 0x48);
}
#pragma pack(pop)