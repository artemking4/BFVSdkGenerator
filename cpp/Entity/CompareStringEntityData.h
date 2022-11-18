// Object: CompareStringEntityData
// ClassId: 2527
// RuntimeId: 41239
// TypeInfo: 0x0000000144ED6020
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class CompareStringEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString A; // 0x28
        CString B; // 0x30
        Boolean TriggerOnPropertyChange; // 0x38
        Boolean TriggerOnStart; // 0x39
        Boolean HasEventConnections; // 0x3A
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(CompareStringEntityData) == 0x40);
}
#pragma pack(pop)