// Object: WarPhotoScreenshotEntityData
// ClassId: 3906
// RuntimeId: 10719
// TypeInfo: 0x0000000144C7ED00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class WarPhotoScreenshotEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString Filename; // 0x28
    }; // 0x30
    static_assert(sizeof(WarPhotoScreenshotEntityData) == 0x30);
}
#pragma pack(pop)