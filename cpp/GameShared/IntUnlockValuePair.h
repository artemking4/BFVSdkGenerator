// Object: IntUnlockValuePair
// ClassId: 5555
// RuntimeId: 21462
// TypeInfo: 0x0000000144E8E160
#include "../GameShared/UnlockValuePair.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class IntUnlockValuePair : public GameShared::UnlockValuePair {
        Int32 DefaultValue; // 0x20
        Int32 UnlockedValue; // 0x24
    }; // 0x28
    static_assert(sizeof(IntUnlockValuePair) == 0x28);
}
#pragma pack(pop)