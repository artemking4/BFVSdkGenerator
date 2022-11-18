// Object: ServerPersistenceSuppressionHandlerEntityData
// ClassId: 3193
// RuntimeId: 61684
// TypeInfo: 0x0000000144D13A80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceSuppressionHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 SuppressionAmountLimit; // 0x24
        Float32 TimeSinceSuppressionLimit; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ServerPersistenceSuppressionHandlerEntityData) == 0x30);
}
#pragma pack(pop)