// Object: TransformToRotationEntityData
// ClassId: 3598
// RuntimeId: 12523
// TypeInfo: 0x0000000144EE45D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Entity {
    class TransformToRotationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform In; // 0x30
        Boolean Degrees; // 0x70
        char pad_0x71[0xF];
    }; // 0x80
    static_assert(sizeof(TransformToRotationEntityData) == 0x80);
}
#pragma pack(pop)