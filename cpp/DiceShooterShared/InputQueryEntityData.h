// Object: InputQueryEntityData
// ClassId: 2804
// RuntimeId: 57963
// TypeInfo: 0x0000000144DE4C70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/InputQuerySource.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class InputQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        DiceShooterShared::InputQuerySource InputSource; // 0x24
        Int32 Action; // 0x28
        Float32 TimeSincePressedAdjustment; // 0x2C
        Float32 MouseInputScale; // 0x30
        Float32 GamepadInputScale; // 0x34
        Boolean AlwaysOutputValue; // 0x38
        Boolean Enabled; // 0x39
        Boolean UseEntityCorrectionInterface; // 0x3A
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(InputQueryEntityData) == 0x40);
}
#pragma pack(pop)