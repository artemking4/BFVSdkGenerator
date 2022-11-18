// Object: WarPhotoLoadThumbnailsEntityData
// ClassId: 3905
// RuntimeId: 1638
// TypeInfo: 0x0000000144C7EC80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class WarPhotoLoadThumbnailsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString Filename; // 0x28
        Uint32 MaxFileCount; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(WarPhotoLoadThumbnailsEntityData) == 0x38);
}
#pragma pack(pop)