// Object: TransformSplitterEntityData
// ClassId: 3597
// RuntimeId: 35915
// TypeInfo: 0x0000000144EE4D50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Entity {
    class TransformSplitterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform Transform; // 0x30
    }; // 0x70
    static_assert(sizeof(TransformSplitterEntityData) == 0x70);
}
#pragma pack(pop)