// Object: ZoneStreamerVistaEntityData
// ClassId: 3939
// RuntimeId: 31080
// TypeInfo: 0x0000000144F7E170
#include "../Entity/EntityData.h"
#include "../ZoneStreamer/VistaZoneInfo.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace ZoneStreamer {
    class ZoneStreamerVistaEntityData : public Entity::EntityData {
        Array<ZoneStreamer::VistaZoneInfo> ZoneInfos; // 0x20
        Guid ControlEntity; // 0x28
    }; // 0x38
    static_assert(sizeof(ZoneStreamerVistaEntityData) == 0x38);
}
#pragma pack(pop)