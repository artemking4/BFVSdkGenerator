// Object: BFUISelectFactionEntityData
// ClassId: 2372
// RuntimeId: 25724
// TypeInfo: 0x0000000144D83C20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIFactionObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISelectFactionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        Boolean SaveAutomatically; // 0x30
        Boolean SaveOnDeinit; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(BFUISelectFactionEntityData) == 0x38);
}
#pragma pack(pop)