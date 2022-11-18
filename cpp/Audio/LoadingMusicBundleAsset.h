// Object: LoadingMusicBundleAsset
// ClassId: 546
// RuntimeId: 47988
// TypeInfo: 0x0000000144E1CEC0
#include "../Core/Asset.h"
#include "../Audio/SoundAsset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Audio {
    class LoadingMusicBundleAsset : public Core::Asset {
        Array<Audio::SoundAsset> Assets; // 0x20
        CString UniqueId; // 0x28
        CString SuperBundle; // 0x30
    }; // 0x38
    static_assert(sizeof(LoadingMusicBundleAsset) == 0x38);
}
#pragma pack(pop)