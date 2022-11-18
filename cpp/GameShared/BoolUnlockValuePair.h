// Object: BoolUnlockValuePair
// ClassId: 5553
// RuntimeId: 44752
// TypeInfo: 0x0000000144E8E0E0
#include "../GameShared/UnlockValuePair.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class BoolUnlockValuePair : public GameShared::UnlockValuePair {
        Boolean DefaultValue; // 0x20
        Boolean UnlockedValue; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(BoolUnlockValuePair) == 0x28);
}
#pragma pack(pop)