// Object: DicePlayerIteratorEntityData
// ClassId: 3028
// RuntimeId: 35381
// TypeInfo: 0x0000000144DEE420
#include "../GameShared/PlayerIteratorEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class DicePlayerIteratorEntityData : public GameShared::PlayerIteratorEntityData {
        Boolean AllowManDown; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(DicePlayerIteratorEntityData) == 0x38);
}
#pragma pack(pop)