// Object: ClientPersistenceUnlockInfoEntityData
// ClassId: 2494
// RuntimeId: 61489
// TypeInfo: 0x0000000144D14180
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClientPersistenceUnlockInfoEntityData : public Entity::EntityData {
        Int32 Identifier; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ClientPersistenceUnlockInfoEntityData) == 0x28);
}
#pragma pack(pop)