// Object: ANTSlotTrackData
// ClassId: 4037
// RuntimeId: 52755
// TypeInfo: 0x0000000144E9DC50
#include "../Timeline/PropertyTrackBaseData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTSlotTrackData : public Timeline::PropertyTrackBaseData {
        CString SlotName; // 0x40
    }; // 0x48
    static_assert(sizeof(ANTSlotTrackData) == 0x48);
}
#pragma pack(pop)