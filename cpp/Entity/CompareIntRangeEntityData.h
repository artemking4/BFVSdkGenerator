// Object: CompareIntRangeEntityData
// ClassId: 2525
// RuntimeId: 15385
// TypeInfo: 0x0000000144ED5F20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class CompareIntRangeEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 Value; // 0x24
        Int32 Min; // 0x28
        Int32 Max; // 0x2C
        Boolean HasEventConnections; // 0x30
        Boolean TriggerOnPropertyChange; // 0x31
        Boolean TriggerOnStart; // 0x32
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(CompareIntRangeEntityData) == 0x38);
}
#pragma pack(pop)