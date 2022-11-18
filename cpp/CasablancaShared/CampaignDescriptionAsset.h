// Object: CampaignDescriptionAsset
// ClassId: 192
// RuntimeId: 29538
// TypeInfo: 0x0000000144D034A0
#include "../Core/Asset.h"
#include "../CasablancaShared/OperationsDescriptionAsset.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CampaignDescriptionAsset : public Core::Asset {
        Array<CasablancaShared::OperationsDescriptionAsset> OperationsList; // 0x20
        CString CampaignName; // 0x28
        CString CampaignShortDescription; // 0x30
        CString CampaignLongDescription; // 0x38
        CString CampaignDescription; // 0x40
        Int32 CampaignIndex; // 0x48
        Boolean XP1Required; // 0x4C
        Boolean XP2Required; // 0x4D
        Boolean XP3Required; // 0x4E
        Boolean XP4Required; // 0x4F
    }; // 0x50
    static_assert(sizeof(CampaignDescriptionAsset) == 0x50);
}
#pragma pack(pop)