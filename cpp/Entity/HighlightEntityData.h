// Object: HighlightEntityData
// ClassId: 2793
// RuntimeId: 49183
// TypeInfo: 0x0000000144EE2ED0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec3.h"
#include "../Global/Uint8.h"
#include "../Core/Vec2.h"

#pragma pack(push, 16)
namespace Entity {
    class HighlightEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Color; // 0x30
        Core::Vec2 TopLeft; // 0x40
        Core::Vec2 BottomRight; // 0x48
        Uint8 Alpha; // 0x50
        char pad_0x51[0xF];
    }; // 0x60
    static_assert(sizeof(HighlightEntityData) == 0x60);
}
#pragma pack(pop)