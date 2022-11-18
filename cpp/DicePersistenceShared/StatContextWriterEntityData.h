// Object: StatContextWriterEntityData
// ClassId: 3516
// RuntimeId: 39720
// TypeInfo: 0x0000000144DC8080
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"
#include "../DicePersistenceShared/StatContextKeyData.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatContextWriterEntityData : public Entity::EntityData {
        DicePersistenceShared::PersistenceContextObject Context; // 0x20
        DicePersistenceShared::StatContextKeyData Key; // 0x28
        Boolean TriggerOnPropertyChange; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(StatContextWriterEntityData) == 0x38);
}
#pragma pack(pop)