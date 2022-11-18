// Object: QuickscopeTest
// ClassId: 679
// RuntimeId: 9000
// TypeInfo: 0x0000000144F14C80
#include "../Core/Asset.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace QuickscopeShared {
    class QuickscopeTest : public Core::Asset {
        Int32 Number; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(QuickscopeTest) == 0x28);
}
#pragma pack(pop)