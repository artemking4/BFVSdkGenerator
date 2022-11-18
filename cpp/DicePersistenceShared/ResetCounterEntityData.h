// Object: ResetCounterEntityData
// ClassId: 3112
// RuntimeId: 63679
// TypeInfo: 0x0000000144DC7D80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DicePersistenceShared/CounterResetGroup.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class ResetCounterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DicePersistenceShared::CounterResetGroup CounterResetGroup; // 0x28
        DicePersistenceShared::PersistenceContextObject Context; // 0x30
    }; // 0x38
    static_assert(sizeof(ResetCounterEntityData) == 0x38);
}
#pragma pack(pop)