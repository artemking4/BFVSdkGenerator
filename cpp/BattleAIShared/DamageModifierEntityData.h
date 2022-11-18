// Object: DamageModifierEntityData
// ClassId: 2595
// RuntimeId: 8668
// TypeInfo: 0x0000000144C180B0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class DamageModifierEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 DamageMultiplierAIvsHuman; // 0x24
        Float32 DOTDamageMultiplierAIvsHuman; // 0x28
        Float32 DamageMultiplierAIvsAI; // 0x2C
        Float32 DOTDamageMultiplierAIvsAI; // 0x30
        Boolean EnableFromStart; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(DamageModifierEntityData) == 0x38);
}
#pragma pack(pop)