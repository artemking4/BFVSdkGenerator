// Object: ClipAssetLayerData
// ClassId: 4006
// RuntimeId: 52644
// TypeInfo: 0x0000000144E30A90
#include "../Timeline/TimelineTrackData.h"
#include "../GameClient/ClipAssetKeyframe.h"

#pragma pack(push, 8)
namespace GameClient {
    class ClipAssetLayerData : public Timeline::TimelineTrackData {
        Array<GameClient::ClipAssetKeyframe> Keyframes; // 0x30
    }; // 0x38
    static_assert(sizeof(ClipAssetLayerData) == 0x38);
}
#pragma pack(pop)