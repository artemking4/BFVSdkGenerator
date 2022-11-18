// Object: DebugMenuItemEntityData
// ClassId: 2608
// RuntimeId: 46076
// TypeInfo: 0x0000000144E8FDE0
#include "../Entity/EntityData.h"
#include "../GameShared/DebugMenuItemType.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class DebugMenuItemEntityData : public Entity::EntityData {
        GameShared::DebugMenuItemType ItemType; // 0x20
        char pad_0x24[0x4];
        CString Text; // 0x28
    }; // 0x30
    static_assert(sizeof(DebugMenuItemEntityData) == 0x30);
}
#pragma pack(pop)