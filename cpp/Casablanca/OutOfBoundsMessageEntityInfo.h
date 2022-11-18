// Object: OutOfBoundsMessageEntityInfo
// ClassId: 4295
// RuntimeId: 12260
// TypeInfo: 0x0000000144C32EF0
#include "../GameShared/MessageEntityInfo.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class OutOfBoundsMessageEntityInfo : public GameShared::MessageEntityInfo {
        Float32 DisplayTime; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(OutOfBoundsMessageEntityInfo) == 0x20);
}
#pragma pack(pop)