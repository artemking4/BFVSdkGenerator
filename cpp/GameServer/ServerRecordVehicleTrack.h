// Object: ServerRecordVehicleTrack
// ClassId: 8626
// RuntimeId: 39986
// TypeInfo: 0x0000000144E5B2A0
#include "../Timeline/RecordTrackBase.h"

namespace GameServer {
    class ServerRecordVehicleTrack : public Timeline::RecordTrackBase {
        char pad_0x58[0x10];
    }; // 0x68
    static_assert(sizeof(ServerRecordVehicleTrack) == 0x68);
}