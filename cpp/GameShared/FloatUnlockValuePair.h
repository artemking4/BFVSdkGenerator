// Object: FloatUnlockValuePair
// ClassId: 5554
// RuntimeId: 42900
// TypeInfo: 0x0000000144E8E1E0
#include "../GameShared/UnlockValuePair.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class FloatUnlockValuePair : public GameShared::UnlockValuePair {
        Float32 DefaultValue; // 0x20
        Float32 UnlockedValue; // 0x24
    }; // 0x28
    static_assert(sizeof(FloatUnlockValuePair) == 0x28);
}
#pragma pack(pop)