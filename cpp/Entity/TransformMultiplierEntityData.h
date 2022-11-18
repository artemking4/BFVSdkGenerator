// Object: TransformMultiplierEntityData
// ClassId: 3592
// RuntimeId: 52783
// TypeInfo: 0x0000000144EE4E50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Entity {
    class TransformMultiplierEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform In1; // 0x30
        Core::LinearTransform In2; // 0x70
    }; // 0xB0
    static_assert(sizeof(TransformMultiplierEntityData) == 0xB0);
}
#pragma pack(pop)