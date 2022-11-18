// Object: UIBundlesAsset
// ClassId: 868
// RuntimeId: 44390
// TypeInfo: 0x0000000144F68BE0
#include "../Core/Asset.h"
#include "../UIDataKeysShared/UIBundleAssetState.h"

#pragma pack(push, 8)
namespace UIDataKeysShared {
    class UIBundlesAsset : public Core::Asset {
        Array<UIDataKeysShared::UIBundleAssetState> UIBundleAssetStateList; // 0x20
    }; // 0x28
    static_assert(sizeof(UIBundlesAsset) == 0x28);
}
#pragma pack(pop)