// Object: CompareContextEntityData
// ClassId: 2520
// RuntimeId: 33125
// TypeInfo: 0x0000000144DC8480
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class CompareContextEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DicePersistenceShared::PersistenceContextObject In1; // 0x28
        DicePersistenceShared::PersistenceContextObject In2; // 0x30
    }; // 0x38
    static_assert(sizeof(CompareContextEntityData) == 0x38);
}
#pragma pack(pop)