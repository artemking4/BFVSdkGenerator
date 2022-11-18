// Object: ObjectAreaQueryEntityData
// ClassId: 2908
// RuntimeId: 3965
// TypeInfo: 0x0000000144E76940
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class ObjectAreaQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform GeometryTransform; // 0x30
        Float32 Radius; // 0x70
        char pad_0x74[0xC];
    }; // 0x80
    static_assert(sizeof(ObjectAreaQueryEntityData) == 0x80);
}
#pragma pack(pop)