// Object: MovementActionRandomizerData
// ClassId: 4315
// RuntimeId: 14904
// TypeInfo: 0x0000000144E8F760
#include "../GameShared/MovementActionData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class MovementActionRandomizerData : public GameShared::MovementActionData {
        Array<GameShared::MovementActionData> Actions; // 0x18
        Boolean ReinsertIntoRandomizedListAfterUse; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(MovementActionRandomizerData) == 0x28);
}
#pragma pack(pop)