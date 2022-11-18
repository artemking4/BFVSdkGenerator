// Object: BFMaterialDamageTypePropertyData
// ClassId: 4271
// RuntimeId: 57070
// TypeInfo: 0x0000000144D4ACF0
#include "../Entity/PhysicsPropertyRelationPropertyData.h"
#include "../GameplaySim/MaterialDamageType.h"
#include "../DiceShooterShared/CharacterStateRequestDataBase.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFMaterialDamageTypePropertyData : public Entity::PhysicsPropertyRelationPropertyData {
        GameplaySim::MaterialDamageType DamageType; // 0x20
        char pad_0x24[0x4];
        DiceShooterShared::CharacterStateRequestDataBase Request; // 0x28
        Float32 MinDamageToTriggerRequest; // 0x30
        Boolean TriggerRequestOnFriendlySoldiers; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(BFMaterialDamageTypePropertyData) == 0x38);
}
#pragma pack(pop)