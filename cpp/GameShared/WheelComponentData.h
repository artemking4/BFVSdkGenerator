// Object: WheelComponentData
// ClassId: 1731
// RuntimeId: 4836
// TypeInfo: 0x0000000144E8DCE0
#include "../Entity/BoneComponentData.h"
#include "../Global/Boolean.h"
#include "../GameShared/WheelConfigData.h"
#include "../GameShared/WheelPhysicsType.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class WheelComponentData : public Entity::BoneComponentData {
        GameShared::WheelConfigData Config; // 0x80
        GameShared::WheelPhysicsType PhysicsType; // 0x88
        Float32 EffectClampVelocity; // 0x8C
        Float32 DisabledStrengthModifierOverride; // 0x90
        Boolean Enabled; // 0x94
        Boolean EnableWheelRaycasts; // 0x95
        Boolean IsRotationallyRestricted; // 0x96
        char pad_0x97[0x9];
    }; // 0xA0
    static_assert(sizeof(WheelComponentData) == 0xA0);
}
#pragma pack(pop)