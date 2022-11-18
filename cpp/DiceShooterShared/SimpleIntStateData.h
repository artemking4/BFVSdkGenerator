// Object: SimpleIntStateData
// ClassId: 4627
// RuntimeId: 7254
// TypeInfo: 0x0000000144DF17D0
#include "../DiceShooterShared/SimpleStateData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class SimpleIntStateData : public DiceShooterShared::SimpleStateData {
        Int32 DefaultValue; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(SimpleIntStateData) == 0x30);
}
#pragma pack(pop)