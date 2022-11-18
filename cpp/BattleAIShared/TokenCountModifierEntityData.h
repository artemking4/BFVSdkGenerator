// Object: TokenCountModifierEntityData
// ClassId: 3579
// RuntimeId: 22956
// TypeInfo: 0x0000000144C18130
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class TokenCountModifierEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 OverriddenGrenadeTokenCount; // 0x24
        Int32 OverriddenMeleeChargeTokenCount; // 0x28
        Int32 OverriddenFiringTokenCount; // 0x2C
        Int32 OverridenFiringTokenPerTargetCount; // 0x30
        Boolean EnableFromStart; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(TokenCountModifierEntityData) == 0x38);
}
#pragma pack(pop)