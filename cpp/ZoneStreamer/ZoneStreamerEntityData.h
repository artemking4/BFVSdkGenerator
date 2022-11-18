// Object: ZoneStreamerEntityData
// ClassId: 3484
// RuntimeId: 30862
// TypeInfo: 0x0000000144F7E270
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../ZoneStreamer/ZoneStreamerInfo.h"

#pragma pack(push, 16)
namespace ZoneStreamer {
    class ZoneStreamerEntityData : public Entity::SpatialEntityData {
        ZoneStreamer::ZoneStreamerInfo Info; // 0x60
        Array<CString> BlacklistedObjectTypes; // 0x88
        Array<CString> BlacklistedBlueprintTypes; // 0x90
        Boolean ClientSideOnly; // 0x98
        Boolean EnableDefaultFocus; // 0x99
        Boolean IgnoreOrigin; // 0x9A
        char pad_0x9B[0x5];
    }; // 0xA0
    static_assert(sizeof(ZoneStreamerEntityData) == 0xA0);
}
#pragma pack(pop)