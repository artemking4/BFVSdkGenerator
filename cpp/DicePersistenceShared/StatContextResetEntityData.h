// Object: StatContextResetEntityData
// ClassId: 3515
// RuntimeId: 7672
// TypeInfo: 0x0000000144DC8100
#include "../Entity/EntityData.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"
#include "../DicePersistenceShared/StatContextResetGroup.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatContextResetEntityData : public Entity::EntityData {
        DicePersistenceShared::PersistenceContextObject Context; // 0x20
        DicePersistenceShared::StatContextResetGroup ResetGroup; // 0x28
    }; // 0x30
    static_assert(sizeof(StatContextResetEntityData) == 0x30);
}
#pragma pack(pop)