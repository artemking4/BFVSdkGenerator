// Object: AwardTrackerMessageQueueEntityData
// ClassId: 2090
// RuntimeId: 30539
// TypeInfo: 0x0000000144D222F0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/AwardObject.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AwardTrackerMessageQueueEntityData : public Entity::EntityData {
        CasablancaShared::AwardObject InAwardObject; // 0x20
        UIIncubatorShared::LocalizedStringId InName; // 0x28
        CString InImagePath; // 0x30
        CString InGainedAwardCode; // 0x38
    }; // 0x40
    static_assert(sizeof(AwardTrackerMessageQueueEntityData) == 0x40);
}
#pragma pack(pop)