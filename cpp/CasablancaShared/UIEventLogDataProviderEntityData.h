// Object: UIEventLogDataProviderEntityData
// ClassId: 3704
// RuntimeId: 51630
// TypeInfo: 0x0000000144D1E8F0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../UIIncubatorShared/LocalizedStringId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIEventLogDataProviderEntityData : public Entity::EntityData {
        Float32 IdleTime; // 0x20
        Int32 MaxEntries; // 0x24
        UIIncubatorShared::LocalizedStringId WeaponNameFormatSid; // 0x28
    }; // 0x30
    static_assert(sizeof(UIEventLogDataProviderEntityData) == 0x30);
}
#pragma pack(pop)