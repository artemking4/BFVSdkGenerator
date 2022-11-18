// Object: BFUIKeybindingsContainer
// ClassId: 1216
// RuntimeId: 52382
// TypeInfo: 0x0000000144D879A0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIKeybinding.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIKeybindingsContainer : public Core::DataContainer {
        Array<CasablancaShared::BFUIKeybinding> Keybindings; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIKeybindingsContainer) == 0x20);
}
#pragma pack(pop)