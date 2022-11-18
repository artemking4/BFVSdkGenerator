// Object: UIWeaponEntityData
// ClassId: 3787
// RuntimeId: 54757
// TypeInfo: 0x0000000144D209F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIWeaponEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 OverallAmmoCriticalPercentage; // 0x24
        CasablancaShared::BFUIPlayerObject OptionalPlayer; // 0x28
        Boolean UpdateAutomatically; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(UIWeaponEntityData) == 0x38);
}
#pragma pack(pop)