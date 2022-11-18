// Object: InformAnimationOfPhysicsStateEntityData
// ClassId: 2800
// RuntimeId: 26607
// TypeInfo: 0x0000000144DF34F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/InformAnimationOfPhysicsPerAnimatableBinding.h"
#include "../DiceShooterShared/InformAnimationOfPhysicsCommonBinding.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class InformAnimationOfPhysicsStateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        DiceShooterShared::InformAnimationOfPhysicsPerAnimatableBinding PerAnimatableBinding; // 0x24
        DiceShooterShared::InformAnimationOfPhysicsCommonBinding CommonBinding; // 0x60
        Int32 AnimationEntitySpacePriority; // 0x3E4
        Boolean AlwaysEnabled; // 0x3E8
        Boolean UseSpineXFor1p; // 0x3E9
        char pad_0x3EA[0x6];
    }; // 0x3F0
    static_assert(sizeof(InformAnimationOfPhysicsStateEntityData) == 0x3F0);
}
#pragma pack(pop)