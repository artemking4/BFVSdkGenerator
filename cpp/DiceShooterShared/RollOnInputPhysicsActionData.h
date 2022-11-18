// Object: RollOnInputPhysicsActionData
// ClassId: 2962
// RuntimeId: 57033
// TypeInfo: 0x0000000144DEDA20
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../DiceShooterShared/RollOnInputData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class RollOnInputPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        Array<DiceShooterShared::RollOnInputData> RollInputs; // 0x58
        Float32 MaxRollAngle; // 0x60
        Float32 SmoothTime; // 0x64
        Float32 SmoothTimeNoInput; // 0x68
        char pad_0x6C[0x4];
    }; // 0x70
    static_assert(sizeof(RollOnInputPhysicsActionData) == 0x70);
}
#pragma pack(pop)