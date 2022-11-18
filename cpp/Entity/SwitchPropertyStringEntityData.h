// Object: SwitchPropertyStringEntityData
// ClassId: 3534
// RuntimeId: 3273
// TypeInfo: 0x0000000144EE43D0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class SwitchPropertyStringEntityData : public Entity::EntityData {
        Array<CString> StringProperties; // 0x20
        Core::Realm Realm; // 0x28
        Boolean RestrictToSelected; // 0x2C
        Boolean UpdateOnPropertyChange; // 0x2D
        char pad_0x2E[0x2];
    }; // 0x30
    static_assert(sizeof(SwitchPropertyStringEntityData) == 0x30);
}
#pragma pack(pop)