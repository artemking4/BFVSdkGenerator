// Object: UIMessageTriggerData
// ClassId: 3733
// RuntimeId: 48783
// TypeInfo: 0x0000000144D21EF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMessageTriggerData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UIMessageTriggerData) == 0x28);
}
#pragma pack(pop)