// Object: LocalizedStringIdPickerEntityData
// ClassId: 2849
// RuntimeId: 13372
// TypeInfo: 0x0000000144DBBC80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class LocalizedStringIdPickerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString Sid; // 0x28
    }; // 0x30
    static_assert(sizeof(LocalizedStringIdPickerEntityData) == 0x30);
}
#pragma pack(pop)