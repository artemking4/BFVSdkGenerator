// Object: HorseHealthComponentData
// ClassId: 1933
// RuntimeId: 31095
// TypeInfo: 0x0000000144C7CD00
#include "../GameplaySim/ControllableHealthComponentData.h"
#include "../Global/Float32.h"
#include "../SoldierShared/ValueAtX.h"

#pragma pack(push, 16)
namespace Casablanca {
    class HorseHealthComponentData : public GameplaySim::ControllableHealthComponentData {
        Float32 MaxHealth; // 0x80
        Float32 DamageMultiplier; // 0x84
        Float32 FallDamageThreshold; // 0x88
        char pad_0x8C[0x4];
        Array<SoldierShared::ValueAtX> DamageAtVerticalVelocity; // 0x90
        char pad_0x98[0x8];
    }; // 0xA0
    static_assert(sizeof(HorseHealthComponentData) == 0xA0);
}
#pragma pack(pop)