// Object: BFCharacterStateTriggerEntityData
// ClassId: 3458
// RuntimeId: 14514
// TypeInfo: 0x0000000144D5B360
#include "../SoldierShared/CharacterStateTriggerEntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Entity/MaterialDecl.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFCharacterStateTriggerEntityData : public SoldierShared::CharacterStateTriggerEntityData {
        Core::Vec3 DamageDirection; // 0xC0
        Core::Vec3 DamageOrigin; // 0xD0
        Core::Vec3 DamageImpactDirection; // 0xE0
        Core::Realm Realm; // 0xF0
        Float32 DamageToGive; // 0xF4
        Entity::MaterialDecl DamageDamagedMaterial; // 0xF8
        Entity::MaterialDecl DamageCollidingMaterial; // 0xFC
        Boolean DamageShouldForce; // 0x100
        char pad_0x101[0xF];
    }; // 0x110
    static_assert(sizeof(BFCharacterStateTriggerEntityData) == 0x110);
}
#pragma pack(pop)