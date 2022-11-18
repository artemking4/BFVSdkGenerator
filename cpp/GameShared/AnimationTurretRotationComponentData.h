// Object: AnimationTurretRotationComponentData
// ClassId: 1713
// RuntimeId: 18836
// TypeInfo: 0x0000000144E8D860
#include "../Entity/GameComponentData.h"
#include "../GameShared/TurretRotationInfo.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class AnimationTurretRotationComponentData : public Entity::GameComponentData {
        Array<GameShared::TurretRotationInfo> Rotations; // 0x80
        Int32 SoldierBaseIndex; // 0x88
        Boolean UnifiedBaseIndex; // 0x8C
        Boolean UseVehicleWorldTransform; // 0x8D
        Boolean OutputWorldTransform; // 0x8E
        char pad_0x8F[0x1];
    }; // 0x90
    static_assert(sizeof(AnimationTurretRotationComponentData) == 0x90);
}
#pragma pack(pop)