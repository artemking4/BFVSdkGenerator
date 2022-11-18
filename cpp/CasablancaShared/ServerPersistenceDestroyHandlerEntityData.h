// Object: ServerPersistenceDestroyHandlerEntityData
// ClassId: 3165
// RuntimeId: 45621
// TypeInfo: 0x0000000144D13680
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceDestroyHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceDestroyHandlerEntityData) == 0x28);
}
#pragma pack(pop)