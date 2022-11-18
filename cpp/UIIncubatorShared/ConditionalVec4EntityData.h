// Object: ConditionalVec4EntityData
// ClassId: 2541
// RuntimeId: 34075
// TypeInfo: 0x0000000144F6EAC0
#include "../UIIncubatorShared/ConditionalStateEntityData.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace UIIncubatorShared {
    class ConditionalVec4EntityData : public UIIncubatorShared::ConditionalStateEntityData {
        char pad_0x28[0x8];
        Core::Vec4 ValueIfTrue; // 0x30
        Core::Vec4 ValueIfFalse; // 0x40
    }; // 0x50
    static_assert(sizeof(ConditionalVec4EntityData) == 0x50);
}
#pragma pack(pop)