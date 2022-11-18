// Object: BFUICurrencyEntityData
// ClassId: 2178
// RuntimeId: 51324
// TypeInfo: 0x0000000144D85D20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/UICurrencyType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICurrencyEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::UICurrencyType CurrencyType; // 0x24
    }; // 0x28
    static_assert(sizeof(BFUICurrencyEntityData) == 0x28);
}
#pragma pack(pop)