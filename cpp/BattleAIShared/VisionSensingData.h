// Object: VisionSensingData
// ClassId: 459
// RuntimeId: 31540
// TypeInfo: 0x0000000144C10B80
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/Float32.h"
#include "../BattleAIShared/VisionSensingOverrideData.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class VisionSensingData : public Core::DataContainerPolicyAsset {
        Float32 SensingConeRange; // 0x20
        Float32 SensingConeRangeAgainstVehicles; // 0x24
        Float32 SensingConeRangeWhenAlerted; // 0x28
        Float32 SensingConeAngle; // 0x2C
        Float32 SensingConeAngleWhenAlerted; // 0x30
        Float32 SensingConeAngleAbove; // 0x34
        Float32 SensingConeAngleAboveWhenAlerted; // 0x38
        Float32 SensingConeAngleBelow; // 0x3C
        Float32 SensingConeAngleBelowWhenAlerted; // 0x40
        Float32 SensingStaticTargetObjectDistance; // 0x44
        Float32 SensingMovingTargetObjectDistance; // 0x48
        Float32 SensingPeripheralConeRange; // 0x4C
        Array<BattleAIShared::VisionSensingOverrideData> StateSpecificOverrides; // 0x50
        Array<BattleAIShared::VisionSensingOverrideData> StateSettings; // 0x58
    }; // 0x60
    static_assert(sizeof(VisionSensingData) == 0x60);
}
#pragma pack(pop)