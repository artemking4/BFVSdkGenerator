// Object: BFUIBoostInfoEntityData
// ClassId: 2162
// RuntimeId: 26180
// TypeInfo: 0x0000000144D304A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIAffectingBoostObject.h"
#include "../CasablancaShared/BFUISelectableBoostObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIBoostInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIAffectingBoostObject AffectingBoost; // 0x28
        CasablancaShared::BFUISelectableBoostObject SelectableBoost; // 0x30
        Boolean UpdateAutomatically; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(BFUIBoostInfoEntityData) == 0x40);
}
#pragma pack(pop)