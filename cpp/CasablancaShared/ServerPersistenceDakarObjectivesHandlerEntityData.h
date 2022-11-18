// Object: ServerPersistenceDakarObjectivesHandlerEntityData
// ClassId: 3162
// RuntimeId: 46749
// TypeInfo: 0x0000000144D12E00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceDakarObjectivesHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceDakarObjectivesHandlerEntityData) == 0x28);
}
#pragma pack(pop)