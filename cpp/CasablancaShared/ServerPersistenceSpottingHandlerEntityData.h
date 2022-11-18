// Object: ServerPersistenceSpottingHandlerEntityData
// ClassId: 3190
// RuntimeId: 31689
// TypeInfo: 0x0000000144D13B00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceSpottingHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceSpottingHandlerEntityData) == 0x28);
}
#pragma pack(pop)