// Object: ZoneStreamerEntity
// ClassId: 8287
// RuntimeId: 51911
// TypeInfo: 0x0000000144F7C920
#include "../ZoneStreamer/ZoneStreamerEntityBase.h"

namespace ZoneStreamer {
    class ZoneStreamerEntity : public ZoneStreamer::ZoneStreamerEntityBase {
        char pad_0x270[0x4A8];
    }; // 0x718
    static_assert(sizeof(ZoneStreamerEntity) == 0x718);
}