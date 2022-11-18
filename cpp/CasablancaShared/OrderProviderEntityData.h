// Object: OrderProviderEntityData
// ClassId: 2924
// RuntimeId: 2042
// TypeInfo: 0x0000000144D5F260
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class OrderProviderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString PlaceOrderText; // 0x28
        Boolean UpdateAutomatically; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(OrderProviderEntityData) == 0x38);
}
#pragma pack(pop)