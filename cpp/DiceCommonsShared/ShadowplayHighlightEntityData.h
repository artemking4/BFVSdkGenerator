// Object: ShadowplayHighlightEntityData
// ClassId: 3204
// RuntimeId: 60782
// TypeInfo: 0x0000000144DBEBB0
#include "../Entity/EntityData.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ShadowplayHighlightEntityData : public Entity::EntityData {
        UIIncubatorShared::LocalizedStringId AwardNameStringId; // 0x20
        Int32 StartDeltaTime; // 0x28
        Int32 EndDeltaTime; // 0x2C
    }; // 0x30
    static_assert(sizeof(ShadowplayHighlightEntityData) == 0x30);
}
#pragma pack(pop)