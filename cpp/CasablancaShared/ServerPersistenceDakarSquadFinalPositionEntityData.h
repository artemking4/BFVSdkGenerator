// Object: ServerPersistenceDakarSquadFinalPositionEntityData
// ClassId: 3163
// RuntimeId: 2825
// TypeInfo: 0x0000000144D12D80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceDakarSquadFinalPositionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceDakarSquadFinalPositionEntityData) == 0x28);
}
#pragma pack(pop)