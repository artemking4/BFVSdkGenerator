// Object: LoadingMusicEntityData
// ClassId: 2837
// RuntimeId: 59654
// TypeInfo: 0x0000000144E1DD40
#include "../Entity/EntityData.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class LoadingMusicEntityData : public Entity::EntityData {
        Guid SoundGuid; // 0x20
        CString BundleUniqueId; // 0x30
        Boolean LoadOnCreation; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(LoadingMusicEntityData) == 0x40);
}
#pragma pack(pop)