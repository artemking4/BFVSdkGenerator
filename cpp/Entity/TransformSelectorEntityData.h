// Object: TransformSelectorEntityData
// ClassId: 3594
// RuntimeId: 24436
// TypeInfo: 0x0000000144EE3E50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Entity {
    class TransformSelectorEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform In1; // 0x30
        Core::LinearTransform In2; // 0x70
        Boolean Selection; // 0xB0
        char pad_0xB1[0xF];
    }; // 0xC0
    static_assert(sizeof(TransformSelectorEntityData) == 0xC0);
}
#pragma pack(pop)