// Object: PrioritizedBoolEntityData
// ClassId: 3038
// RuntimeId: 38147
// TypeInfo: 0x0000000144DBEF30
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class PrioritizedBoolEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 InputCount; // 0x24
        Int32 DefaultOutput; // 0x28
        Boolean TriggerOnPropertyChange; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(PrioritizedBoolEntityData) == 0x30);
}
#pragma pack(pop)