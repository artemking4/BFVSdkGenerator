// Object: MathOpEntityData
// ClassId: 2882
// RuntimeId: 53929
// TypeInfo: 0x0000000144EE4250
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Entity/MathOp.h"

#pragma pack(push, 8)
namespace Entity {
    class MathOpEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<Entity::MathOp> Operators; // 0x28
    }; // 0x30
    static_assert(sizeof(MathOpEntityData) == 0x30);
}
#pragma pack(pop)