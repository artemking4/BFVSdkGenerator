// Object: ControlInputEntityData
// ClassId: 2550
// RuntimeId: 65054
// TypeInfo: 0x0000000144DF0BD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class ControlInputEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 TakeControlEntryIndex; // 0x24
        Float32 RotationYaw; // 0x28
        Float32 RotationPitch; // 0x2C
        Float32 RotationRoll; // 0x30
        Float32 Throttle; // 0x34
        Float32 Brake; // 0x38
        Float32 Sprint; // 0x3C
        Boolean Fire; // 0x40
        Boolean ControlYaw; // 0x41
        Boolean ControlPitch; // 0x42
        Boolean ControlRoll; // 0x43
        Boolean ControlThrottle; // 0x44
        Boolean ControlBrake; // 0x45
        Boolean ControlSprint; // 0x46
        Boolean ControlFire; // 0x47
    }; // 0x48
    static_assert(sizeof(ControlInputEntityData) == 0x48);
}
#pragma pack(pop)