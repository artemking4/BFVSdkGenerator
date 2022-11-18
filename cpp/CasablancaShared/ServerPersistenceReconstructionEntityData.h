// Object: ServerPersistenceReconstructionEntityData
// ClassId: 3182
// RuntimeId: 18156
// TypeInfo: 0x0000000144D13180
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceReconstructionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceReconstructionEntityData) == 0x28);
}
#pragma pack(pop)