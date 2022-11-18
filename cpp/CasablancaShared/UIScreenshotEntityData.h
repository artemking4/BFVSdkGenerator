// Object: UIScreenshotEntityData
// ClassId: 3758
// RuntimeId: 7820
// TypeInfo: 0x0000000144D1F7F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIScreenshotEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean EnableDraw; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(UIScreenshotEntityData) == 0x28);
}
#pragma pack(pop)