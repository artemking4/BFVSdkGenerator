// Object: ConditionalVec2EntityData
// ClassId: 2539
// RuntimeId: 14854
// TypeInfo: 0x0000000144F6EBC0
#include "../UIIncubatorShared/ConditionalStateEntityData.h"
#include "../Core/Vec2.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class ConditionalVec2EntityData : public UIIncubatorShared::ConditionalStateEntityData {
        Core::Vec2 ValueIfTrue; // 0x28
        Core::Vec2 ValueIfFalse; // 0x30
    }; // 0x38
    static_assert(sizeof(ConditionalVec2EntityData) == 0x38);
}
#pragma pack(pop)