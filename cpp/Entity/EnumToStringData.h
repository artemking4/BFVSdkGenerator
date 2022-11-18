// Object: EnumToStringData
// ClassId: 2710
// RuntimeId: 60423
// TypeInfo: 0x0000000144ED66A0
#include "../Entity/ImpliedEnumTypeLogicEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class EnumToStringData : public Entity::ImpliedEnumTypeLogicEntityData {
        Boolean ExcludeTypePrefix; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(EnumToStringData) == 0x30);
}
#pragma pack(pop)