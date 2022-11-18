// Object: ForceFieldEntityData
// ClassId: 2768
// RuntimeId: 15106
// TypeInfo: 0x0000000144DEE0A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../DiceShooterShared/FieldFalloffType.h"
#include "../Global/Float32.h"
#include "../DiceShooterShared/FieldShapeType.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class ForceFieldEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform WorldTransform; // 0x30
        DiceShooterShared::FieldFalloffType FallofType; // 0x70
        Float32 Force; // 0x74
        DiceShooterShared::FieldShapeType ShapeType; // 0x78
        Float32 Radius; // 0x7C
        Float32 Length; // 0x80
        Float32 Width; // 0x84
        Float32 Depth; // 0x88
        Boolean Enabled; // 0x8C
        Boolean AffectBangers; // 0x8D
        Boolean AffectVehicles; // 0x8E
        char pad_0x8F[0x1];
    }; // 0x90
    static_assert(sizeof(ForceFieldEntityData) == 0x90);
}
#pragma pack(pop)