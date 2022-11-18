// Object: StatEventCollection
// ClassId: 840
// RuntimeId: 6026
// TypeInfo: 0x0000000144DC7B00
#include "../Entity/TreeBase.h"
#include "../DicePersistenceShared/StatEventData.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatEventCollection : public Entity::TreeBase {
        Array<DicePersistenceShared::StatEventData> Events; // 0x20
    }; // 0x28
    static_assert(sizeof(StatEventCollection) == 0x28);
}
#pragma pack(pop)