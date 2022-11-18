// Object: CompareFloatRangeEntityData
// ClassId: 2523
// RuntimeId: 29213
// TypeInfo: 0x0000000144ED5FA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class CompareFloatRangeEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 Value; // 0x24
        Float32 Min; // 0x28
        Float32 Max; // 0x2C
        Boolean HasEventConnections; // 0x30
        Boolean TriggerOnPropertyChange; // 0x31
        Boolean TriggerOnStart; // 0x32
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(CompareFloatRangeEntityData) == 0x38);
}
#pragma pack(pop)