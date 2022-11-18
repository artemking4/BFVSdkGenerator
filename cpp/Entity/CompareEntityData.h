// Object: CompareEntityData
// ClassId: 2521
// RuntimeId: 18292
// TypeInfo: 0x0000000144EE4050
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Entity/CompareOp.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Entity {
    class CompareEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Entity::CompareOp Operator; // 0x24
        Float32 FloatIn0; // 0x28
        Float32 FloatIn1; // 0x2C
        Int32 IntIn0; // 0x30
        Int32 IntIn1; // 0x34
    }; // 0x38
    static_assert(sizeof(CompareEntityData) == 0x38);
}
#pragma pack(pop)