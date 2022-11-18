// Object: ConfigEntityAssetData
// ClassId: 325
// RuntimeId: 23200
// TypeInfo: 0x0000000144F6E940
#include "../Core/DataContainerPolicyAsset.h"
#include "../UIIncubatorShared/ConfigListAsset.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class ConfigEntityAssetData : public Core::DataContainerPolicyAsset {
        Array<UIIncubatorShared::ConfigListAsset> DataLists; // 0x20
    }; // 0x28
    static_assert(sizeof(ConfigEntityAssetData) == 0x28);
}
#pragma pack(pop)