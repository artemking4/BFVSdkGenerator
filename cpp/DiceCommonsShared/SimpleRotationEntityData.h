// Object: SimpleRotationEntityData
// ClassId: 3212
// RuntimeId: 11210
// TypeInfo: 0x0000000144DBE930
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../DiceCommonsShared/TransformModifierData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class SimpleRotationEntityData : public Entity::EntityData {
        Array<DiceCommonsShared::TransformModifierData> TransformModifiers; // 0x20
        Float32 RotationSpeedMultiplier; // 0x28
        Boolean AutoStart; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(SimpleRotationEntityData) == 0x30);
}
#pragma pack(pop)