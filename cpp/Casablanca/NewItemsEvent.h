// Object: NewItemsEvent
// ClassId: 8427
// RuntimeId: 49321
// TypeInfo: 0x0000000144CF32D0
#include "../Online/PresenceEvent.h"

namespace Casablanca {
    class NewItemsEvent : public Online::PresenceEvent {
        char pad_0x8[0x8];
    }; // 0x10
    static_assert(sizeof(NewItemsEvent) == 0x10);
}