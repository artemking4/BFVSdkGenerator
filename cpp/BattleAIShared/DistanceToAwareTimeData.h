// Object: DistanceToAwareTimeData
// ClassId: 337
// RuntimeId: 43103
// TypeInfo: 0x0000000144C10F00
#include "../Core/DataContainerPolicyAsset.h"
#include "../Core/FloatCurveAsset.h"
#include "../BattleAIShared/DistanceToAwareTimeStateData.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class DistanceToAwareTimeData : public Core::DataContainerPolicyAsset {
        Core::FloatCurveAsset DefaultCurve; // 0x20
        Array<BattleAIShared::DistanceToAwareTimeStateData> StateSpecificOverrides; // 0x28
        Array<Core::FloatCurveAsset> StateCurves; // 0x30
    }; // 0x38
    static_assert(sizeof(DistanceToAwareTimeData) == 0x38);
}
#pragma pack(pop)