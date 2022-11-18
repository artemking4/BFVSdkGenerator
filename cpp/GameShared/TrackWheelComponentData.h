// Object: TrackWheelComponentData
// ClassId: 1732
// RuntimeId: 48684
// TypeInfo: 0x0000000144E8DC60
#include "../GameShared/WheelComponentData.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace GameShared {
    class TrackWheelComponentData : public GameShared::WheelComponentData {
        CString BoneName; // 0xA0
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(TrackWheelComponentData) == 0xB0);
}
#pragma pack(pop)