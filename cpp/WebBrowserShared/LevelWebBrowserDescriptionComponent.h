// Object: LevelWebBrowserDescriptionComponent
// ClassId: 4213
// RuntimeId: 29953
// TypeInfo: 0x0000000144F7BBE0
#include "../GameShared/LevelDescriptionComponent.h"
#include "../Core/PlatformScalableBool.h"

#pragma pack(push, 8)
namespace WebBrowserShared {
    class LevelWebBrowserDescriptionComponent : public GameShared::LevelDescriptionComponent {
        Core::PlatformScalableBool CreateWebBrowser; // 0x18
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(LevelWebBrowserDescriptionComponent) == 0x28);
}
#pragma pack(pop)