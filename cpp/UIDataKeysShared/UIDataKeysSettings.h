// Object: UIDataKeysSettings
// ClassId: 5035
// RuntimeId: 51763
// TypeInfo: 0x0000000144F68FE0
#include "../Core/SystemSettings.h"
#include "../UIDataKeysShared/UIBundlesAsset.h"

#pragma pack(push, 8)
namespace UIDataKeysShared {
    class UIDataKeysSettings : public Core::SystemSettings {
        UIDataKeysShared::UIBundlesAsset Bundles; // 0x20
    }; // 0x28
    static_assert(sizeof(UIDataKeysSettings) == 0x28);
}
#pragma pack(pop)