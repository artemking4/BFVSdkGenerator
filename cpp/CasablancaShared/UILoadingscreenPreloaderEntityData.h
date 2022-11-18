// Object: UILoadingscreenPreloaderEntityData
// ClassId: 3728
// RuntimeId: 23766
// TypeInfo: 0x0000000144D1FAF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UILoadingscreenPreloaderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString LevelPath; // 0x28
        CString StartPoint; // 0x30
        Boolean AutoLoadLevel; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(UILoadingscreenPreloaderEntityData) == 0x40);
}
#pragma pack(pop)