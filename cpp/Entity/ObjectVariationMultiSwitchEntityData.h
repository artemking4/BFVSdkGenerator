// Object: ObjectVariationMultiSwitchEntityData
// ClassId: 2914
// RuntimeId: 38850
// TypeInfo: 0x0000000144EE53D0
#include "../Entity/EntityData.h"
#include "../Entity/ObjectVariation.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class ObjectVariationMultiSwitchEntityData : public Entity::EntityData {
        Array<Entity::ObjectVariation> Variations; // 0x20
        Int32 CurrentIndex; // 0x28
        Boolean SetOnInit; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(ObjectVariationMultiSwitchEntityData) == 0x30);
}
#pragma pack(pop)