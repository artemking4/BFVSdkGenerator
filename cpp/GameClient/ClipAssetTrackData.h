// Object: ClipAssetTrackData
// ClassId: 4007
// RuntimeId: 26573
// TypeInfo: 0x0000000144E30990
#include "../Timeline/TimelineTrackData.h"
#include "../GameClient/ClipAssetEvaluatorData.h"
#include "../Entity/SkeletonAsset.h"

#pragma pack(push, 8)
namespace GameClient {
    class ClipAssetTrackData : public Timeline::TimelineTrackData {
        GameClient::ClipAssetEvaluatorData EvalData; // 0x30
        Entity::SkeletonAsset SkeletonAsset; // 0x38
    }; // 0x40
    static_assert(sizeof(ClipAssetTrackData) == 0x40);
}
#pragma pack(pop)