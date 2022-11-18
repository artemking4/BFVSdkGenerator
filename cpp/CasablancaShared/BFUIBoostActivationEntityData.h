// Object: BFUIBoostActivationEntityData
// ClassId: 2161
// RuntimeId: 4713
// TypeInfo: 0x0000000144D30420
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISelectableBoostObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIBoostActivationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISelectableBoostObject SelectedBoost; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIBoostActivationEntityData) == 0x30);
}
#pragma pack(pop)