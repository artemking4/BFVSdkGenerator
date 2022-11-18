// Object: FloatEntityData
// ClassId: 2751
// RuntimeId: 50510
// TypeInfo: 0x0000000144EE33D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class FloatEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 DefaultValue; // 0x24
        Float32 IncDecValue; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(FloatEntityData) == 0x30);
}
#pragma pack(pop)