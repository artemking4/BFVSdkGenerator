// Object: StringEntityData
// ClassId: 3528
// RuntimeId: 3269
// TypeInfo: 0x0000000144EE3250
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Entity {
    class StringEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString DefaultString; // 0x28
    }; // 0x30
    static_assert(sizeof(StringEntityData) == 0x30);
}
#pragma pack(pop)