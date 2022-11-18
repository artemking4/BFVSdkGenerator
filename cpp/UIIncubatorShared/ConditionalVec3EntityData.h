// Object: ConditionalVec3EntityData
// ClassId: 2540
// RuntimeId: 14102
// TypeInfo: 0x0000000144F6EB40
#include "../UIIncubatorShared/ConditionalStateEntityData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace UIIncubatorShared {
    class ConditionalVec3EntityData : public UIIncubatorShared::ConditionalStateEntityData {
        char pad_0x28[0x8];
        Core::Vec3 ValueIfTrue; // 0x30
        Core::Vec3 ValueIfFalse; // 0x40
    }; // 0x50
    static_assert(sizeof(ConditionalVec3EntityData) == 0x50);
}
#pragma pack(pop)