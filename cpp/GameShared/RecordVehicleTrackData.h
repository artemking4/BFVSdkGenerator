// Object: RecordVehicleTrackData
// ClassId: 4033
// RuntimeId: 22886
// TypeInfo: 0x0000000144E961B0
#include "../Timeline/RecordTrackBaseData.h"
#include "../Timeline/RecordTrackChildrenData.h"

#pragma pack(push, 8)
namespace GameShared {
    class RecordVehicleTrackData : public Timeline::RecordTrackBaseData {
        Array<Timeline::RecordTrackChildrenData> ChildrenTracks; // 0x48
    }; // 0x50
    static_assert(sizeof(RecordVehicleTrackData) == 0x50);
}
#pragma pack(pop)