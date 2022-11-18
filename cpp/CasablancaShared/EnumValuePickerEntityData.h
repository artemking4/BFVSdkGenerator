// Object: EnumValuePickerEntityData
// ClassId: 2712
// RuntimeId: 43994
// TypeInfo: 0x0000000144D11D00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EnumValuePickerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 EnumValue; // 0x24
    }; // 0x28
    static_assert(sizeof(EnumValuePickerEntityData) == 0x28);
}
#pragma pack(pop)