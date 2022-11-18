// Object: SetCustomizationTagsEntityData
// ClassId: 3197
// RuntimeId: 58248
// TypeInfo: 0x0000000144DB6010
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class SetCustomizationTagsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CString> Tags; // 0x28
    }; // 0x30
    static_assert(sizeof(SetCustomizationTagsEntityData) == 0x30);
}
#pragma pack(pop)