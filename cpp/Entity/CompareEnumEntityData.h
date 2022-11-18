// Object: CompareEnumEntityData
// ClassId: 2707
// RuntimeId: 50111
// TypeInfo: 0x0000000144ED6A20
#include "../Entity/ImpliedEnumTypeLogicEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Entity {
    class CompareEnumEntityData : public Entity::ImpliedEnumTypeLogicEntityData {
        Int32 EnumDefaultValue; // 0x28
        Boolean TriggerOnPropertyChange; // 0x2C
        Boolean TriggerOnStart; // 0x2D
        Boolean AlwaysSend; // 0x2E
        char pad_0x2F[0x1];
    }; // 0x30
    static_assert(sizeof(CompareEnumEntityData) == 0x30);
}
#pragma pack(pop)