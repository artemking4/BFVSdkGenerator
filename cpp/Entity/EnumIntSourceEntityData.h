// Object: EnumIntSourceEntityData
// ClassId: 2703
// RuntimeId: 60390
// TypeInfo: 0x0000000144ED69A0
#include "../Entity/ExplicitEnumTypeLogicEntityData.h"
#include "../Entity/EnumIntSourceProperty.h"

#pragma pack(push, 8)
namespace Entity {
    class EnumIntSourceEntityData : public Entity::ExplicitEnumTypeLogicEntityData {
        Array<Entity::EnumIntSourceProperty> EnumIntOutputProperties; // 0x28
    }; // 0x30
    static_assert(sizeof(EnumIntSourceEntityData) == 0x30);
}
#pragma pack(pop)