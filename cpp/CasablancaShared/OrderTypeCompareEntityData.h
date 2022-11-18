// Object: OrderTypeCompareEntityData
// ClassId: 2925
// RuntimeId: 12825
// TypeInfo: 0x0000000144D200F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/OrderType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class OrderTypeCompareEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::OrderType A; // 0x24
        CasablancaShared::OrderType B; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(OrderTypeCompareEntityData) == 0x30);
}
#pragma pack(pop)