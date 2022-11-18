// Object: UIWeaponTargetEntityData
// ClassId: 3788
// RuntimeId: 7177
// TypeInfo: 0x0000000144D20970
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIWeaponTargetEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 UpdateFrequency; // 0x24
    }; // 0x28
    static_assert(sizeof(UIWeaponTargetEntityData) == 0x28);
}
#pragma pack(pop)