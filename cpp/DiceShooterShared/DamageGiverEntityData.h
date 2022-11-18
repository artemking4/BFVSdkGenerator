// Object: DamageGiverEntityData
// ClassId: 2594
// RuntimeId: 59000
// TypeInfo: 0x0000000144DEE4A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/TeamId.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class DamageGiverEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        GameShared::TeamId Team; // 0x24
        CString DamageGiverName; // 0x28
        Boolean IsAIDamage; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(DamageGiverEntityData) == 0x38);
}
#pragma pack(pop)