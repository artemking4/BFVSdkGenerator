// Object: VecBuilderEntityData
// ClassId: 3867
// RuntimeId: 65371
// TypeInfo: 0x0000000144EE4850
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class VecBuilderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 X; // 0x24
        Float32 Y; // 0x28
        Float32 Z; // 0x2C
        Float32 W; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(VecBuilderEntityData) == 0x38);
}
#pragma pack(pop)