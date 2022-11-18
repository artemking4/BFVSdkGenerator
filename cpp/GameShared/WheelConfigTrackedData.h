// Object: WheelConfigTrackedData
// ClassId: 5716
// RuntimeId: 23005
// TypeInfo: 0x0000000144E9AE90
#include "../GameShared/WheelConfigData.h"
#include "../GameShared/ExtraCollisionTests.h"

#pragma pack(push, 16)
namespace GameShared {
    class WheelConfigTrackedData : public GameShared::WheelConfigData {
        GameShared::ExtraCollisionTests ExtraCollisionTests; // 0x190
    }; // 0x1C0
    static_assert(sizeof(WheelConfigTrackedData) == 0x1C0);
}
#pragma pack(pop)