// Object: SimpleFloatStateData
// ClassId: 4626
// RuntimeId: 45993
// TypeInfo: 0x0000000144DF1750
#include "../DiceShooterShared/SimpleStateData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class SimpleFloatStateData : public DiceShooterShared::SimpleStateData {
        Float32 DefaultValue; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(SimpleFloatStateData) == 0x30);
}
#pragma pack(pop)