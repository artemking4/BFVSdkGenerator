// Object: BFDamageModifierPropertyData
// ClassId: 4270
// RuntimeId: 22405
// TypeInfo: 0x0000000144D4A970
#include "../Entity/PhysicsPropertyRelationPropertyData.h"
#include "../CasablancaShared/DamageModifierBaseData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFDamageModifierPropertyData : public Entity::PhysicsPropertyRelationPropertyData {
        Array<CasablancaShared::DamageModifierBaseData> DamageModifiers; // 0x20
    }; // 0x28
    static_assert(sizeof(BFDamageModifierPropertyData) == 0x28);
}
#pragma pack(pop)