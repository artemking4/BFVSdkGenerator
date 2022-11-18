// Object: EntryInputActionMapsData
// ClassId: 493
// RuntimeId: 32712
// TypeInfo: 0x0000000144E6C5D0
#include "../Core/Asset.h"
#include "../Global/Int32.h"
#include "../GameShared/InputActionMapSlot.h"
#include "../GameShared/EntryInputActionMapData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace GameShared {
    class EntryInputActionMapsData : public Core::Asset {
        Int32 ActionMapSettingsScheme; // 0x20
        GameShared::InputActionMapSlot DefaultInputActionMap; // 0x24
        Array<GameShared::EntryInputActionMapData> InputActionMaps; // 0x28
        Uint32 Identifier; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(EntryInputActionMapsData) == 0x38);
}
#pragma pack(pop)