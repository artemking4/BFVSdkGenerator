// Object: ConditionalTransformEntityData
// ClassId: 2538
// RuntimeId: 32258
// TypeInfo: 0x0000000144F6EA40
#include "../UIIncubatorShared/ConditionalStateEntityData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace UIIncubatorShared {
    class ConditionalTransformEntityData : public UIIncubatorShared::ConditionalStateEntityData {
        char pad_0x28[0x8];
        Core::LinearTransform ValueIfTrue; // 0x30
        Core::LinearTransform ValueIfFalse; // 0x70
    }; // 0xB0
    static_assert(sizeof(ConditionalTransformEntityData) == 0xB0);
}
#pragma pack(pop)