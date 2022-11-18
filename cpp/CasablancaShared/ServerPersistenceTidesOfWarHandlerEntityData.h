// Object: ServerPersistenceTidesOfWarHandlerEntityData
// ClassId: 3194
// RuntimeId: 53689
// TypeInfo: 0x0000000144D13480
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceTidesOfWarHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceTidesOfWarHandlerEntityData) == 0x28);
}
#pragma pack(pop)