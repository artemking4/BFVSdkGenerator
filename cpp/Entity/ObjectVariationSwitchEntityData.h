// Object: ObjectVariationSwitchEntityData
// ClassId: 2916
// RuntimeId: 15967
// TypeInfo: 0x0000000144EE5450
#include "../Entity/EntityData.h"
#include "../Entity/ObjectVariation.h"

#pragma pack(push, 8)
namespace Entity {
    class ObjectVariationSwitchEntityData : public Entity::EntityData {
        Entity::ObjectVariation Variation1; // 0x20
        Entity::ObjectVariation Variation2; // 0x28
    }; // 0x30
    static_assert(sizeof(ObjectVariationSwitchEntityData) == 0x30);
}
#pragma pack(pop)