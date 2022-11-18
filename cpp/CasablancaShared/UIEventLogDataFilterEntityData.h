// Object: UIEventLogDataFilterEntityData
// ClassId: 3703
// RuntimeId: 40156
// TypeInfo: 0x0000000144D1E870
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/UIEventLogEntryList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIEventLogDataFilterEntityData : public Entity::EntityData {
        Float32 NearbyThreshold; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::UIEventLogEntryList EntryList; // 0x28
    }; // 0x30
    static_assert(sizeof(UIEventLogDataFilterEntityData) == 0x30);
}
#pragma pack(pop)