// Object: WebBrowserOverlayEntityData
// ClassId: 3924
// RuntimeId: 36112
// TypeInfo: 0x0000000144F7BCE0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace WebBrowserShared {
    class WebBrowserOverlayEntityData : public Entity::EntityData {
        CString PersistentID; // 0x20
        Boolean StrongPersistent; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(WebBrowserOverlayEntityData) == 0x30);
}
#pragma pack(pop)