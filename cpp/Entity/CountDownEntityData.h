// Object: CountDownEntityData
// ClassId: 2555
// RuntimeId: 245
// TypeInfo: 0x0000000144EE5B50
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace Entity {
    class CountDownEntityData : public Entity::EntityData {
        Int32 StartValue; // 0x20
        Core::Realm Realm; // 0x24
        Boolean RunOnce; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(CountDownEntityData) == 0x30);
}
#pragma pack(pop)