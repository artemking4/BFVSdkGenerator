// Object: VectorMathOpEntityData
// ClassId: 3870
// RuntimeId: 39604
// TypeInfo: 0x0000000144EE41D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Entity/VectorMathOp.h"

#pragma pack(push, 8)
namespace Entity {
    class VectorMathOpEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Entity::VectorMathOp MathOperator; // 0x24
    }; // 0x28
    static_assert(sizeof(VectorMathOpEntityData) == 0x28);
}
#pragma pack(pop)