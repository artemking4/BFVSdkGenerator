// Object: RealmProxy
// ClassId: 8286
// RuntimeId: 56053
// TypeInfo: 0x0000000144F7CB40
#include "../ZoneStreamer/ZoneStreamerEntityBase.h"

namespace ZoneStreamer {
    class RealmProxy : public ZoneStreamer::ZoneStreamerEntityBase {
        char pad_0x270[0x50];
    }; // 0x2C0
    static_assert(sizeof(RealmProxy) == 0x2C0);
}