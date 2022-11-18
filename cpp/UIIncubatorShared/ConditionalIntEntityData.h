// Object: ConditionalIntEntityData
// ClassId: 2536
// RuntimeId: 9869
// TypeInfo: 0x0000000144F6ECC0
#include "../UIIncubatorShared/ConditionalStateEntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class ConditionalIntEntityData : public UIIncubatorShared::ConditionalStateEntityData {
        Int32 ValueIfTrue; // 0x28
        Int32 ValueIfFalse; // 0x2C
    }; // 0x30
    static_assert(sizeof(ConditionalIntEntityData) == 0x30);
}
#pragma pack(pop)