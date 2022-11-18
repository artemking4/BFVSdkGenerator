// Object: AnimatedDriverEntityData
// ClassId: 2052
// RuntimeId: 18796
// TypeInfo: 0x0000000144E8D2E0
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"
#include "../Ant/AntRef.h"
#include "../Global/Float32.h"
#include "../GameShared/NormalizeSettings.h"

#pragma pack(push, 16)
namespace GameShared {
    class AnimatedDriverEntityData : public Entity::EntityData {
        Ant::AntRef VehicleSpeed; // 0x20
        char pad_0x34[0xC];
        Core::LinearTransform InputTransform; // 0x40
        Ant::AntRef VehicleMovementState; // 0x80
        Ant::AntRef VehicleBoost; // 0x94
        Ant::AntRef VehicleBrake; // 0xA8
        Float32 MovementStateStandThreshold; // 0xBC
        GameShared::NormalizeSettings Yaw; // 0xC0
        GameShared::NormalizeSettings Pitch; // 0xD8
        GameShared::NormalizeSettings Roll; // 0xF0
        Boolean DelayAnimationWheelTransform; // 0x108
        char pad_0x109[0x7];
    }; // 0x110
    static_assert(sizeof(AnimatedDriverEntityData) == 0x110);
}
#pragma pack(pop)