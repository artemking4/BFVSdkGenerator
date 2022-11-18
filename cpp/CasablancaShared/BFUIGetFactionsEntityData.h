// Object: BFUIGetFactionsEntityData
// ClassId: 2223
// RuntimeId: 26212
// TypeInfo: 0x0000000144D83D20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetFactionsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFUIGetFactionsEntityData) == 0x28);
}
#pragma pack(pop)