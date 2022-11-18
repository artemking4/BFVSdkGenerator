// Object: ZoneStreamerNotificationEntityData
// ClassId: 3938
// RuntimeId: 59918
// TypeInfo: 0x0000000144F7E0F0
#include "../Entity/EntityData.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace ZoneStreamer {
    class ZoneStreamerNotificationEntityData : public Entity::EntityData {
        Guid ControlEntity; // 0x20
        CString BundleName; // 0x30
    }; // 0x38
    static_assert(sizeof(ZoneStreamerNotificationEntityData) == 0x38);
}
#pragma pack(pop)