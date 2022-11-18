// Object: ScriptEntityData
// ClassId: 3146
// RuntimeId: 50305
// TypeInfo: 0x0000000144ED7570
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace Entity {
    class ScriptEntityData : public Entity::EntityData {
        CString Code; // 0x20
        Core::Realm Realm; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ScriptEntityData) == 0x30);
}
#pragma pack(pop)