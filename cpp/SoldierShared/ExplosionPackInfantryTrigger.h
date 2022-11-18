// Object: ExplosionPackInfantryTrigger
// ClassId: 1603
// RuntimeId: 63133
// TypeInfo: 0x0000000144F43FB0
#include "../SoldierShared/ExplosionPackTrigger.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class ExplosionPackInfantryTrigger : public SoldierShared::ExplosionPackTrigger {
        Float32 Angle; // 0x18
        Float32 Radius; // 0x1C
        Float32 SoldierDetonationActivationDelay; // 0x20
        Float32 MinSpeedForActivation; // 0x24
        Boolean HasSoldierDetonation; // 0x28
        Boolean UseAngle; // 0x29
        Boolean UseMinSpeedForAI; // 0x2A
        char pad_0x2B[0x5];
    }; // 0x30
    static_assert(sizeof(ExplosionPackInfantryTrigger) == 0x30);
}
#pragma pack(pop)