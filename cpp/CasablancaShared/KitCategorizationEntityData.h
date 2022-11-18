// Object: KitCategorizationEntityData
// ClassId: 2823
// RuntimeId: 48487
// TypeInfo: 0x0000000144DA3100
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class KitCategorizationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DicePersistenceShared::PersistenceContextObject Context; // 0x28
        Boolean TriggerOnPropertyChange; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(KitCategorizationEntityData) == 0x38);
}
#pragma pack(pop)