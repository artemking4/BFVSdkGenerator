// Object: UINotificationMessageEntityData
// ClassId: 3742
// RuntimeId: 38843
// TypeInfo: 0x0000000144D21770
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINotificationMessageEntityData : public Entity::EntityData {
        CString MessageSid; // 0x20
    }; // 0x28
    static_assert(sizeof(UINotificationMessageEntityData) == 0x28);
}
#pragma pack(pop)