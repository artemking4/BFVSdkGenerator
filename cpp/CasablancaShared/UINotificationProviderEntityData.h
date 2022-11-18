// Object: UINotificationProviderEntityData
// ClassId: 3743
// RuntimeId: 5817
// TypeInfo: 0x0000000144D1F370
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINotificationProviderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean ListenForNotifications; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(UINotificationProviderEntityData) == 0x28);
}
#pragma pack(pop)