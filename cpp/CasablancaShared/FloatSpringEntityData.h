// Object: FloatSpringEntityData
// ClassId: 2758
// RuntimeId: 40507
// TypeInfo: 0x0000000144D0A3B0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FloatSpringEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 AccelerationFactor; // 0x24
        Float32 SpringDampning; // 0x28
        Float32 PositionClampValue; // 0x2C
        Float32 VelocityClampValue; // 0x30
        Float32 Input; // 0x34
        Boolean Enabled; // 0x38
        Boolean ChaseModeEnabled; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(FloatSpringEntityData) == 0x40);
}
#pragma pack(pop)