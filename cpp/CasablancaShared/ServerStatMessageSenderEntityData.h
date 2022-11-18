// Object: ServerStatMessageSenderEntityData
// ClassId: 3195
// RuntimeId: 31558
// TypeInfo: 0x0000000144D13100
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerStatMessageSenderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerStatMessageSenderEntityData) == 0x28);
}
#pragma pack(pop)