// Object: ServerPersistenceBestSquadEntityData
// ClassId: 3160
// RuntimeId: 28923
// TypeInfo: 0x0000000144D13280
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceBestSquadEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceBestSquadEntityData) == 0x28);
}
#pragma pack(pop)