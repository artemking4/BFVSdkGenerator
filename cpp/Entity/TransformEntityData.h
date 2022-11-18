// Object: TransformEntityData
// ClassId: 3589
// RuntimeId: 64039
// TypeInfo: 0x0000000144EE32D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Entity {
    class TransformEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform DefaultTransform; // 0x30
    }; // 0x70
    static_assert(sizeof(TransformEntityData) == 0x70);
}
#pragma pack(pop)