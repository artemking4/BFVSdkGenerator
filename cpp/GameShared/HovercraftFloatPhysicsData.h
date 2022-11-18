// Object: HovercraftFloatPhysicsData
// ClassId: 1640
// RuntimeId: 2413
// TypeInfo: 0x0000000144E9B610
#include "../GameShared/HullFloatPhysicsData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class HovercraftFloatPhysicsData : public GameShared::HullFloatPhysicsData {
        Core::Vec3 LandResistanceAxisMod; // 0xA0
        Core::Vec3 LandFrictionAxisMod; // 0xB0
        Core::Vec3 LandFrictionAxisModEngineOff; // 0xC0
        Float32 FrontLength; // 0xD0
        Float32 SideLength; // 0xD4
        Float32 LiftModifierEngineOff; // 0xD8
        Float32 EngineTransitionTime; // 0xDC
    }; // 0xE0
    static_assert(sizeof(HovercraftFloatPhysicsData) == 0xE0);
}
#pragma pack(pop)