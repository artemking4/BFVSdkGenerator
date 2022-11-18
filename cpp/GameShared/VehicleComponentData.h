// Object: VehicleComponentData
// ClassId: 1818
// RuntimeId: 10729
// TypeInfo: 0x0000000144E8D560
#include "../GameShared/ChassisComponentData.h"

#pragma pack(push, 16)
namespace GameShared {
    class VehicleComponentData : public GameShared::ChassisComponentData {
    }; // 0x100
    static_assert(sizeof(VehicleComponentData) == 0x100);
}
#pragma pack(pop)