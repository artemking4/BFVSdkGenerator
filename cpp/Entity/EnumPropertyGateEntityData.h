// Object: EnumPropertyGateEntityData
// ClassId: 2708
// RuntimeId: 3853
// TypeInfo: 0x0000000144ED67A0
#include "../Entity/ImpliedEnumTypeLogicEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class EnumPropertyGateEntityData : public Entity::ImpliedEnumTypeLogicEntityData {
        Boolean Default; // 0x28
        Boolean WritePropertyOnOpenGate; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(EnumPropertyGateEntityData) == 0x30);
}
#pragma pack(pop)