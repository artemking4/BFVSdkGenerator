// Object: BFUIGetAvailableCharactersEntityData
// ClassId: 2211
// RuntimeId: 62232
// TypeInfo: 0x0000000144D83820
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetAvailableCharactersEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
        Boolean IncludeUnownedObjects; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFUIGetAvailableCharactersEntityData) == 0x38);
}
#pragma pack(pop)