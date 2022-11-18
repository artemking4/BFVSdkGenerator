// Object: ZoneStreamerZoneProxyEntityData
// ClassId: 3937
// RuntimeId: 37759
// TypeInfo: 0x0000000144F7E470
#include "../ZoneStreamer/ZoneStreamerLogicEntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace ZoneStreamer {
    class ZoneStreamerZoneProxyEntityData : public ZoneStreamer::ZoneStreamerLogicEntityData {
        Array<CString> ZoneAndRegionNames; // 0x28
    }; // 0x30
    static_assert(sizeof(ZoneStreamerZoneProxyEntityData) == 0x30);
}
#pragma pack(pop)