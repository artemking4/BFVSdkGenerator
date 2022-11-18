// Object: SettingEntityData
// ClassId: 3201
// RuntimeId: 21443
// TypeInfo: 0x0000000144EE3ED0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Entity {
    class SettingEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString BoolSettingName; // 0x28
        CString IntSettingName; // 0x30
        CString FloatSettingName; // 0x38
        CString StringSettingName; // 0x40
    }; // 0x48
    static_assert(sizeof(SettingEntityData) == 0x48);
}
#pragma pack(pop)