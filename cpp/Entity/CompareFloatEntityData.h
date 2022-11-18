// Object: CompareFloatEntityData
// ClassId: 2522
// RuntimeId: 11593
// TypeInfo: 0x0000000144ED60A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class CompareFloatEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 A; // 0x24
        Float32 B; // 0x28
        Boolean TriggerOnPropertyChange; // 0x2C
        Boolean TriggerOnStart; // 0x2D
        Boolean HasEventConnections; // 0x2E
        char pad_0x2F[0x1];
    }; // 0x30
    static_assert(sizeof(CompareFloatEntityData) == 0x30);
}
#pragma pack(pop)