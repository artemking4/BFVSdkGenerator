// Object: DebugMenuSubMenuEntityData
// ClassId: 2609
// RuntimeId: 63511
// TypeInfo: 0x0000000144E8FE60
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class DebugMenuSubMenuEntityData : public Entity::EntityData {
        CString Text; // 0x20
    }; // 0x28
    static_assert(sizeof(DebugMenuSubMenuEntityData) == 0x28);
}
#pragma pack(pop)