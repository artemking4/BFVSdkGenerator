// Object: SwitchEnumEntityData
// ClassId: 2711
// RuntimeId: 42047
// TypeInfo: 0x0000000144ED6520
#include "../Entity/ImpliedEnumTypeLogicEntityData.h"
#include "../Global/Boolean.h"
#include "../Entity/EventName.h"

#pragma pack(push, 8)
namespace Entity {
    class SwitchEnumEntityData : public Entity::ImpliedEnumTypeLogicEntityData {
        Array<Entity::EventName> OutputEvents; // 0x28
        Boolean FireOnPropertyChanged; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(SwitchEnumEntityData) == 0x38);
}
#pragma pack(pop)