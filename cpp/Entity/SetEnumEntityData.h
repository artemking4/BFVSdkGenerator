// Object: SetEnumEntityData
// ClassId: 2705
// RuntimeId: 24545
// TypeInfo: 0x0000000144ED65A0
#include "../Entity/ExplicitEnumTypeLogicEntityData.h"
#include "../Entity/SetEnumValueContainer.h"

#pragma pack(push, 8)
namespace Entity {
    class SetEnumEntityData : public Entity::ExplicitEnumTypeLogicEntityData {
        Array<Entity::SetEnumValueContainer> InputEvents; // 0x28
    }; // 0x30
    static_assert(sizeof(SetEnumEntityData) == 0x30);
}
#pragma pack(pop)