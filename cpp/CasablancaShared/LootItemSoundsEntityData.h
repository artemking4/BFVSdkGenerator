// Object: LootItemSoundsEntityData
// ClassId: 2871
// RuntimeId: 43260
// TypeInfo: 0x0000000144D510D0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LootItemSoundsEntityData : public Entity::EntityData {
        CString InteractionDurationParameterName; // 0x20
        CString InteractionTimeRemainingParameterName; // 0x28
        CString InteractionInterruptedEventName; // 0x30
        CString CollisionSpeedParameterName; // 0x38
    }; // 0x40
    static_assert(sizeof(LootItemSoundsEntityData) == 0x40);
}
#pragma pack(pop)