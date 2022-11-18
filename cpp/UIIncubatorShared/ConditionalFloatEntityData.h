// Object: ConditionalFloatEntityData
// ClassId: 2535
// RuntimeId: 32653
// TypeInfo: 0x0000000144F6EC40
#include "../UIIncubatorShared/ConditionalStateEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class ConditionalFloatEntityData : public UIIncubatorShared::ConditionalStateEntityData {
        Float32 ValueIfTrue; // 0x28
        Float32 ValueIfFalse; // 0x2C
    }; // 0x30
    static_assert(sizeof(ConditionalFloatEntityData) == 0x30);
}
#pragma pack(pop)