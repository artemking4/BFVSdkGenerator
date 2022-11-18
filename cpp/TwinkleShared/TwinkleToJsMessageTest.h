// Object: TwinkleToJsMessageTest
// ClassId: 5354
// RuntimeId: 3690
// TypeInfo: 0x0000000144F66C50
#include "../TwinkleShared/TwinkleToJsMessage.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace TwinkleShared {
    class TwinkleToJsMessageTest : public TwinkleShared::TwinkleToJsMessage {
        Int32 Testing; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(TwinkleToJsMessageTest) == 0x20);
}
#pragma pack(pop)