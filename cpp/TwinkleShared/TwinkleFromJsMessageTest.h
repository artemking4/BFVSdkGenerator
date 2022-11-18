// Object: TwinkleFromJsMessageTest
// ClassId: 5352
// RuntimeId: 623
// TypeInfo: 0x0000000144F66CD0
#include "../TwinkleShared/TwinkleFromJsMessage.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace TwinkleShared {
    class TwinkleFromJsMessageTest : public TwinkleShared::TwinkleFromJsMessage {
        Int32 User; // 0x18
        char pad_0x1C[0x4];
        CString ProfileImageSize; // 0x20
    }; // 0x28
    static_assert(sizeof(TwinkleFromJsMessageTest) == 0x28);
}
#pragma pack(pop)