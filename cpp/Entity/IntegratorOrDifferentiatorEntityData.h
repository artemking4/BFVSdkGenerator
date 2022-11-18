// Object: IntegratorOrDifferentiatorEntityData
// ClassId: 2811
// RuntimeId: 47302
// TypeInfo: 0x0000000144EE3F50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Entity/UpdatePass.h"

#pragma pack(push, 8)
namespace Entity {
    class IntegratorOrDifferentiatorEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 StartValue; // 0x24
        Float32 Input; // 0x28
        Float32 MaxValue; // 0x2C
        Float32 MinValue; // 0x30
        Entity::UpdatePass UpdatePass; // 0x34
        Boolean Bounded; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(IntegratorOrDifferentiatorEntityData) == 0x40);
}
#pragma pack(pop)