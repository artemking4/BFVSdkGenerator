// Object: DamagePlayerOverTimeBaseData
// ClassId: 2596
// RuntimeId: 27326
// TypeInfo: 0x0000000144D5B6E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DamagePlayerOverTimeBaseData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform DamageOrigin; // 0x30
        GameShared::TeamId Team; // 0x70
        Boolean Enabled; // 0x74
        Boolean OwnerIsDamageGiver; // 0x75
        Boolean DoTDamageShielded; // 0x76
        char pad_0x77[0x9];
    }; // 0x80
    static_assert(sizeof(DamagePlayerOverTimeBaseData) == 0x80);
}
#pragma pack(pop)