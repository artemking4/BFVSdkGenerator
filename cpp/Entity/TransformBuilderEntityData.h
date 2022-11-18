// Object: TransformBuilderEntityData
// ClassId: 3588
// RuntimeId: 63514
// TypeInfo: 0x0000000144EE47D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Entity {
    class TransformBuilderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Left; // 0x30
        Core::Vec3 Up; // 0x40
        Core::Vec3 Forward; // 0x50
        Core::Vec3 Trans; // 0x60
        Boolean IsWorldSpace; // 0x70
        Boolean WaitForAll; // 0x71
        char pad_0x72[0xE];
    }; // 0x80
    static_assert(sizeof(TransformBuilderEntityData) == 0x80);
}
#pragma pack(pop)