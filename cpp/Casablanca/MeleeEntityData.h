// Object: MeleeEntityData
// ClassId: 2883
// RuntimeId: 36498
// TypeInfo: 0x0000000144C33570
#include "../Entity/EntityData.h"
#include "../Casablanca/MeleeEntityCommonData.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class MeleeEntityData : public Entity::EntityData {
        Casablanca::MeleeEntityCommonData CommonData; // 0x20
        MotionMachineShared::BoolChannelData IsOnBackChannel; // 0x28
        Float32 InvalidMeleeAttackZoneOverride; // 0x30
        Float32 MeleeAttackDistanceMultiplier; // 0x34
        Float32 MeleeTimeMultiplier; // 0x38
        Boolean DefenderAllowsTakedownFromAnyAngle; // 0x3C
        Boolean AlwaysTakedown; // 0x3D
        Boolean DisableInstantTakedowns; // 0x3E
        char pad_0x3F[0x1];
    }; // 0x40
    static_assert(sizeof(MeleeEntityData) == 0x40);
}
#pragma pack(pop)