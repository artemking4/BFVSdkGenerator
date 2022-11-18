// Object: SimpleBoolStateData
// ClassId: 4625
// RuntimeId: 36369
// TypeInfo: 0x0000000144DF18D0
#include "../DiceShooterShared/SimpleStateData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class SimpleBoolStateData : public DiceShooterShared::SimpleStateData {
        Boolean DefaultValue; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SimpleBoolStateData) == 0x30);
}
#pragma pack(pop)