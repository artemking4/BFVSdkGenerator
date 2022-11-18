// Object: TextSequenceEntityData
// ClassId: 3573
// RuntimeId: 64783
// TypeInfo: 0x0000000144EE2F50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Entity/TextSequenceItem.h"
#include "../Core/Vec2.h"

#pragma pack(push, 8)
namespace Entity {
    class TextSequenceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CString> Events; // 0x28
        Array<Entity::TextSequenceItem> Items; // 0x30
        Core::Vec2 ScreenPosition; // 0x38
    }; // 0x40
    static_assert(sizeof(TextSequenceEntityData) == 0x40);
}
#pragma pack(pop)