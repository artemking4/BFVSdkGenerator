// Object: RotationPositionTransformEntityData
// ClassId: 3134
// RuntimeId: 30484
// TypeInfo: 0x0000000144DBBB00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class RotationPositionTransformEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Position; // 0x30
        Core::LinearTransform RotationTransform; // 0x40
        Core::LinearTransform PositionTransform; // 0x80
        Float32 Yaw; // 0xC0
        Float32 Pitch; // 0xC4
        Float32 Roll; // 0xC8
        Boolean Degrees; // 0xCC
        char pad_0xCD[0x3];
    }; // 0xD0
    static_assert(sizeof(RotationPositionTransformEntityData) == 0xD0);
}
#pragma pack(pop)