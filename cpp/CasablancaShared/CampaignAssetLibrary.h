// Object: CampaignAssetLibrary
// ClassId: 191
// RuntimeId: 12643
// TypeInfo: 0x0000000144D03520
#include "../Core/Asset.h"
#include "../CasablancaShared/CampaignDescriptionAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CampaignAssetLibrary : public Core::Asset {
        Array<CasablancaShared::CampaignDescriptionAsset> CampaignDescriptionList; // 0x20
    }; // 0x28
    static_assert(sizeof(CampaignAssetLibrary) == 0x28);
}
#pragma pack(pop)