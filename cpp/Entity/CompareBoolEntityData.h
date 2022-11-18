// Object: CompareBoolEntityData
// ClassId: 2519
// RuntimeId: 11462
// TypeInfo: 0x0000000144ED61A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class CompareBoolEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean Bool; // 0x24
        Boolean TriggerOnPropertyChange; // 0x25
        Boolean TriggerOnStart; // 0x26
        Boolean AlwaysSend; // 0x27
    }; // 0x28
    static_assert(sizeof(CompareBoolEntityData) == 0x28);
}
#pragma pack(pop)