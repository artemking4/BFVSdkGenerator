// Object: BFObjectiveEntityData
// ClassId: 2104
// RuntimeId: 24371
// TypeInfo: 0x0000000144C32C70
#include "../Entity/EntityData.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFObjectiveEntityData : public Entity::EntityData {
        UIIncubatorShared::LocalizedStringId NameStringId; // 0x20
        CString NameSid; // 0x28
        UIIncubatorShared::LocalizedStringId DescriptionStringId; // 0x30
        CString DescriptionSid; // 0x38
        Uint32 ObjectiveCount; // 0x40
        Boolean DontShowBigWidget; // 0x44
        char pad_0x45[0x3];
    }; // 0x48
    static_assert(sizeof(BFObjectiveEntityData) == 0x48);
}
#pragma pack(pop)