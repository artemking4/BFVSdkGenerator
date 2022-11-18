// Object: DateTimeComponentsEntityData
// ClassId: 2601
// RuntimeId: 22643
// TypeInfo: 0x0000000144C1D600
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Casablanca/DateTimeObject.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DateTimeComponentsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Casablanca::DateTimeObject DateTime; // 0x28
        Boolean TriggerOnStart; // 0x30
        Boolean TriggerOnPropertyChange; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(DateTimeComponentsEntityData) == 0x38);
}
#pragma pack(pop)