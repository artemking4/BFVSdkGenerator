// Object: EulerTransformSplitterEntityData
// ClassId: 2714
// RuntimeId: 64537
// TypeInfo: 0x0000000144EE4CD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Entity {
    class EulerTransformSplitterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform Transform; // 0x30
    }; // 0x70
    static_assert(sizeof(EulerTransformSplitterEntityData) == 0x70);
}
#pragma pack(pop)