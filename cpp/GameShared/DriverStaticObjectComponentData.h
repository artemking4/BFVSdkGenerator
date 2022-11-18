// Object: DriverStaticObjectComponentData
// ClassId: 1759
// RuntimeId: 26882
// TypeInfo: 0x0000000144E80EC0
#include "../GameShared/DriverComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class DriverStaticObjectComponentData : public GameShared::DriverComponentData {
        Float32 Acceleration; // 0xA0
        Float32 Deceleration; // 0xA4
        Float32 TurningRadius; // 0xA8
        Boolean TurnWhileStill; // 0xAC
        Boolean AlignWithGroundNormal; // 0xAD
        char pad_0xAE[0x2];
    }; // 0xB0
    static_assert(sizeof(DriverStaticObjectComponentData) == 0xB0);
}
#pragma pack(pop)