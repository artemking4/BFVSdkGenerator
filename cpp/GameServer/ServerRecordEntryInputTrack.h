// Object: ServerRecordEntryInputTrack
// ClassId: 8624
// RuntimeId: 42725
// TypeInfo: 0x0000000144E5B3A0
#include "../Timeline/RecordTrackBase.h"

namespace GameServer {
    class ServerRecordEntryInputTrack : public Timeline::RecordTrackBase {
        char pad_0x58[0x68];
    }; // 0xC0
    static_assert(sizeof(ServerRecordEntryInputTrack) == 0xC0);
}