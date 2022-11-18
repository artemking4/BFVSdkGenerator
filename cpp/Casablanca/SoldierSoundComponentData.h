// Object: SoldierSoundComponentData
// ClassId: 1847
// RuntimeId: 51994
// TypeInfo: 0x0000000144C7D680
#include "../Entity/GameComponentData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class SoldierSoundComponentData : public Entity::GameComponentData {
        Core::LinearTransform AntTrajectory; // 0x80
        Core::LinearTransform AntBoneTransform; // 0xC0
        Float32 WalkVelocityThreshold; // 0x100
        Float32 RunVelocityThreshold; // 0x104
        Float32 WalkPeriod; // 0x108
        Float32 RunPeriod; // 0x10C
        Float32 AntBoneOffset; // 0x110
        Float32 ExplosionImpulseMagnitudeThreshold; // 0x114
        Float32 CullingDistance; // 0x118
        char pad_0x11C[0x4];
    }; // 0x120
    static_assert(sizeof(SoldierSoundComponentData) == 0x120);
}
#pragma pack(pop)