// Object: InputActionMapData
// ClassId: 4154
// RuntimeId: 7640
// TypeInfo: 0x0000000144E6C750
#include "../Core/DataContainer.h"
#include "../GameShared/InputActionsData.h"
#include "../GameShared/InputActionMapPlatform.h"
#include "../GameShared/InputActionMapSlot.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class InputActionMapData : public Core::DataContainer {
        Array<GameShared::InputActionsData> Actions; // 0x18
        GameShared::InputActionMapPlatform PlatformSpecific; // 0x20
        GameShared::InputActionMapSlot Slot; // 0x24
        CString CopyKeyBindingsFrom; // 0x28
    }; // 0x30
    static_assert(sizeof(InputActionMapData) == 0x30);
}
#pragma pack(pop)