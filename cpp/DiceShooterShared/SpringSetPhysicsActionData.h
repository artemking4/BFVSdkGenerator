// Object: SpringSetPhysicsActionData
// ClassId: 2968
// RuntimeId: 54165
// TypeInfo: 0x0000000144DED820
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../DiceShooterShared/PhysicsActionSpringData.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class SpringSetPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        Float32 SpringLength; // 0x58
        Float32 SpringStrength; // 0x5C
        Float32 CompressionDamping; // 0x60
        Float32 ExpansionDamping; // 0x64
        Float32 PowStrength; // 0x68
        Float32 PowDamping; // 0x6C
        Array<DiceShooterShared::PhysicsActionSpringData> Springs; // 0x70
        Boolean CollideAgainstWater; // 0x78
        char pad_0x79[0x7];
    }; // 0x80
    static_assert(sizeof(SpringSetPhysicsActionData) == 0x80);
}
#pragma pack(pop)