// Object: MotionDampingPhysicsActionData
// ClassId: 2958
// RuntimeId: 59213
// TypeInfo: 0x0000000144DED620
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class MotionDampingPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        Float32 ForwardDamping; // 0x58
        Float32 SideDamping; // 0x5C
        Float32 UpDamping; // 0x60
        Float32 RollDamping; // 0x64
        Float32 PitchDamping; // 0x68
        Float32 YawDamping; // 0x6C
        Boolean LinearDragCalulcations; // 0x70
        Boolean AngularDragCalulcations; // 0x71
        char pad_0x72[0x6];
    }; // 0x78
    static_assert(sizeof(MotionDampingPhysicsActionData) == 0x78);
}
#pragma pack(pop)