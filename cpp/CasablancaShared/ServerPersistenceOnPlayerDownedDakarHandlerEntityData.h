// Object: ServerPersistenceOnPlayerDownedDakarHandlerEntityData
// ClassId: 3168
// RuntimeId: 14493
// TypeInfo: 0x0000000144D13D80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceOnPlayerDownedDakarHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceOnPlayerDownedDakarHandlerEntityData) == 0x28);
}
#pragma pack(pop)