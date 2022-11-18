// Object: UIServerInstanceTextEntityData
// ClassId: 3761
// RuntimeId: 44473
// TypeInfo: 0x0000000144D9B310
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIServerInstanceTextEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UIServerInstanceTextEntityData) == 0x28);
}
#pragma pack(pop)