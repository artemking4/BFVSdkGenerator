// Object: UIIMSettingsAsset
// ClassId: 884
// RuntimeId: 432
// TypeInfo: 0x0000000144E958B0
#include "../Core/Asset.h"
#include "../GameShared/UIAutoScrollTextSettings.h"

#pragma pack(push, 8)
namespace GameShared {
    class UIIMSettingsAsset : public Core::Asset {
        GameShared::UIAutoScrollTextSettings AutoScrollSettings; // 0x20
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UIIMSettingsAsset) == 0x38);
}
#pragma pack(pop)