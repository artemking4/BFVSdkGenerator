// Object: FloatSelectEntityData
// ClassId: 2757
// RuntimeId: 31225
// TypeInfo: 0x0000000144EE3CD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class FloatSelectEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 InPosOrZero; // 0x24
        Float32 InNeg; // 0x28
        Float32 Select; // 0x2C
    }; // 0x30
    static_assert(sizeof(FloatSelectEntityData) == 0x30);
}
#pragma pack(pop)