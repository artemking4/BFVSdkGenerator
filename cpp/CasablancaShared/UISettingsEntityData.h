// Object: UISettingsEntityData
// ClassId: 3763
// RuntimeId: 42183
// TypeInfo: 0x0000000144D20EF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/ProfileOptionDataFloat.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISettingsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        GameShared::ProfileOptionDataFloat FieldOfViewVertical; // 0x28
    }; // 0x30
    static_assert(sizeof(UISettingsEntityData) == 0x30);
}
#pragma pack(pop)