// Object: UISingleplayerDebugMenuItem
// ClassId: 5521
// RuntimeId: 2209
// TypeInfo: 0x0000000144D206F0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISingleplayerDebugMenuItem : public Core::DataContainer {
        CString StartPointName; // 0x18
    }; // 0x20
    static_assert(sizeof(UISingleplayerDebugMenuItem) == 0x20);
}
#pragma pack(pop)