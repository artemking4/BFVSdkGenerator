// Object: CampaignOperationInfo
// ClassId: 1288
// RuntimeId: 6570
// TypeInfo: 0x0000000144D03420
#include "../Core/DataContainer.h"
#include "../CasablancaShared/OperationsDescriptionAsset.h"
#include "../CasablancaShared/SpartaOperationInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CampaignOperationInfo : public Core::DataContainer {
        CasablancaShared::OperationsDescriptionAsset OperationAsset; // 0x18
        CasablancaShared::SpartaOperationInfo SpartaOperationInfo; // 0x20
    }; // 0x28
    static_assert(sizeof(CampaignOperationInfo) == 0x28);
}
#pragma pack(pop)