// Object: EntryInputActionBindingsData
// ClassId: 1577
// RuntimeId: 48621
// TypeInfo: 0x0000000144E6C650
#include "../Core/DataContainer.h"
#include "../GameShared/EntryInputActionBinding.h"

#pragma pack(push, 8)
namespace GameShared {
    class EntryInputActionBindingsData : public Core::DataContainer {
        Array<GameShared::EntryInputActionBinding> Bindings; // 0x18
    }; // 0x20
    static_assert(sizeof(EntryInputActionBindingsData) == 0x20);
}
#pragma pack(pop)