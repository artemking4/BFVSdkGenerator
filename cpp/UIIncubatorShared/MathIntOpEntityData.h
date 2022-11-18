// Object: MathIntOpEntityData
// ClassId: 2881
// RuntimeId: 27157
// TypeInfo: 0x0000000144F6E340
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../UIIncubatorShared/IntMathOp.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class MathIntOpEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<UIIncubatorShared::IntMathOp> Operators; // 0x28
    }; // 0x30
    static_assert(sizeof(MathIntOpEntityData) == 0x30);
}
#pragma pack(pop)