// Object: BfVehicleHudData
// ClassId: 4100
// RuntimeId: 62033
// TypeInfo: 0x0000000144D5A9E0
#include "../GameShared/HudData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/UIPartPropertyList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BfVehicleHudData : public GameShared::HudData {
        Float32 SeaLevelAltFreq; // 0x18
        char pad_0x1C[0x4];
        GameShared::UIPartPropertyList HudPropertyList; // 0x20
        Boolean UseWeaponOrientations; // 0x28
        Boolean UseVelocityVectorMarker; // 0x29
        Boolean UseThrust; // 0x2A
        Boolean UseGForce; // 0x2B
        Boolean UseSkidSlip; // 0x2C
        Boolean UseClimbRate; // 0x2D
        char pad_0x2E[0x2];
    }; // 0x30
    static_assert(sizeof(BfVehicleHudData) == 0x30);
}
#pragma pack(pop)