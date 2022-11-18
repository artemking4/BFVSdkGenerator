// Object: RecordRootTransformTrackData
// ClassId: 4032
// RuntimeId: 17235
// TypeInfo: 0x0000000144E96230
#include "../Timeline/RecordTrackChildrenData.h"
#include "../Timeline/LayeredTransformTrackData.h"
#include "../Timeline/KeyedTransformLayerData.h"

#pragma pack(push, 8)
namespace GameShared {
    class RecordRootTransformTrackData : public Timeline::RecordTrackChildrenData {
        Timeline::LayeredTransformTrackData LayeredTransformTrack; // 0x48
        Timeline::KeyedTransformLayerData KeyedTransformTrack; // 0x50
    }; // 0x58
    static_assert(sizeof(RecordRootTransformTrackData) == 0x58);
}
#pragma pack(pop)