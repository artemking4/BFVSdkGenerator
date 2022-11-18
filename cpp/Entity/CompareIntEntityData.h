// Object: CompareIntEntityData
// ClassId: 2524
// RuntimeId: 59127
// TypeInfo: 0x0000000144ED6120
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class CompareIntEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 A; // 0x24
        Int32 B; // 0x28
        Boolean TriggerOnPropertyChange; // 0x2C
        Boolean TriggerOnStart; // 0x2D
        Boolean HasEventConnections; // 0x2E
        char pad_0x2F[0x1];
    }; // 0x30
    static_assert(sizeof(CompareIntEntityData) == 0x30);
}
#pragma pack(pop)