// Object: UISingleplayerDebugMenuItems
// ClassId: 5522
// RuntimeId: 25939
// TypeInfo: 0x0000000144D20670
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UISingleplayerDebugMenuItem.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISingleplayerDebugMenuItems : public Core::DataContainer {
        Array<CasablancaShared::UISingleplayerDebugMenuItem> MenuItems; // 0x18
    }; // 0x20
    static_assert(sizeof(UISingleplayerDebugMenuItems) == 0x20);
}
#pragma pack(pop)