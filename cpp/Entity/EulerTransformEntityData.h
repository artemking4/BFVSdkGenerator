// Object: EulerTransformEntityData
// ClassId: 2713
// RuntimeId: 33106
// TypeInfo: 0x0000000144EE4C50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Entity/ModifierEuler.h"

#pragma pack(push, 16)
namespace Entity {
    class EulerTransformEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Trans; // 0x30
        Float32 Rotation; // 0x40
        Entity::ModifierEuler Euler; // 0x44
        char pad_0x48[0x8];
    }; // 0x50
    static_assert(sizeof(EulerTransformEntityData) == 0x50);
}
#pragma pack(pop)