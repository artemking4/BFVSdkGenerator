// Object: IntEntityData
// ClassId: 2808
// RuntimeId: 32972
// TypeInfo: 0x0000000144EE3450
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Entity {
    class IntEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 DefaultValue; // 0x24
        Int32 IncDecValue; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(IntEntityData) == 0x30);
}
#pragma pack(pop)