// Object: SelectEventEntityData
// ClassId: 3150
// RuntimeId: 45418
// TypeInfo: 0x0000000144EE56D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Entity {
    class SelectEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 Selected; // 0x24
        Array<CString> Events; // 0x28
    }; // 0x30
    static_assert(sizeof(SelectEventEntityData) == 0x30);
}
#pragma pack(pop)