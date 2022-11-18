// Object: ServerRecordRootTransformTrack
// ClassId: 8625
// RuntimeId: 57491
// TypeInfo: 0x0000000144E5B320
#include "../Timeline/RecordTrackBase.h"

namespace GameServer {
    class ServerRecordRootTransformTrack : public Timeline::RecordTrackBase {
        char pad_0x58[0x10];
    }; // 0x68
    static_assert(sizeof(ServerRecordRootTransformTrack) == 0x68);
}