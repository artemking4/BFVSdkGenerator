// Object: BlockListEvent
// ClassId: 8416
// RuntimeId: 20803
// TypeInfo: 0x0000000144F05090
#include "../Online/PresenceEvent.h"

namespace Online {
    class BlockListEvent : public Online::PresenceEvent {
        char pad_0x8[0x3298];
    }; // 0x32A0
    static_assert(sizeof(BlockListEvent) == 0x32A0);
}