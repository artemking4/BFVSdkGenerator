// Object: ANTSignalTrackData
// ClassId: 4027
// RuntimeId: 55438
// TypeInfo: 0x0000000144E9DCD0
#include "../Timeline/LinkTrackData.h"
#include "../Timeline/PropertyTrackBaseData.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTSignalTrackData : public Timeline::LinkTrackData {
        Array<Timeline::PropertyTrackBaseData> SignalTracks; // 0x40
    }; // 0x48
    static_assert(sizeof(ANTSignalTrackData) == 0x48);
}
#pragma pack(pop)