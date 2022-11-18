// Object: VecSplitterEntityData
// ClassId: 3868
// RuntimeId: 3438
// TypeInfo: 0x0000000144EE4A50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec2.h"
#include "../Core/Vec3.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace Entity {
    class VecSplitterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Vec3; // 0x30
        Core::Vec4 Vec4; // 0x40
        Core::Vec2 Vec2; // 0x50
        char pad_0x58[0x8];
    }; // 0x60
    static_assert(sizeof(VecSplitterEntityData) == 0x60);
}
#pragma pack(pop)