// Object: AwarenessComponentData
// ClassId: 1718
// RuntimeId: 1754
// TypeInfo: 0x0000000144DE8010
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/AwarenessComponentBinding.h"
#include "../Entity/GameplayBones.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class AwarenessComponentData : public Entity::GameComponentData {
        Core::Vec3 OverrideLookatTargetWorldPos; // 0x80
        Core::Realm Realm; // 0x90
        DiceShooterShared::AwarenessComponentBinding Binding; // 0x94
        Entity::GameplayBones ReferenceJoint; // 0x170
        Entity::GameplayBones OwnTargetBone; // 0x174
        Float32 OwnTargetRange; // 0x178
        Float32 DamageInflictorTargetDuration; // 0x17C
        Entity::GameplayBones DamageInflictorTargetBone; // 0x180
        Float32 MinLookatSoldierDuration; // 0x184
        Float32 MaxLookatSoldierDuration; // 0x188
        Float32 MinIgnoreSoldierDuration; // 0x18C
        Float32 MaxIgnoreSoldierDuration; // 0x190
        Float32 LookAtSlerpSpeed; // 0x194
        Float32 VehicleReactRadius; // 0x198
        Float32 VehicleSpeedThreshold; // 0x19C
        Float32 VehicleDirectionConeAngle; // 0x1A0
        Float32 VehicleReactionDuration; // 0x1A4
        Boolean HasOwnTarget; // 0x1A8
        Boolean OutputRawLookAtAngles; // 0x1A9
        Boolean OverrideLookatTarget; // 0x1AA
        char pad_0x1AB[0x5];
    }; // 0x1B0
    static_assert(sizeof(AwarenessComponentData) == 0x1B0);
}
#pragma pack(pop)