// Object: AimRotationBoneComponentData
// ClassId: 1711
// RuntimeId: 46811
// TypeInfo: 0x0000000144DE8090
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Entity/GameplayBones.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class AimRotationBoneComponentData : public Entity::GameComponentData {
        Entity::GameplayBones FollowBone; // 0x80
        Boolean RequireUpdateVisualTransforms; // 0x84
        Boolean IsAimRotationBoneRoot; // 0x85
        Boolean ApplyYaw; // 0x86
        Boolean ApplyPitch; // 0x87
        Boolean Active; // 0x88
        Boolean AimerDrivesRotation; // 0x89
        char pad_0x8A[0x6];
    }; // 0x90
    static_assert(sizeof(AimRotationBoneComponentData) == 0x90);
}
#pragma pack(pop)