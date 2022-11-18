// Object: CampaignOperationsInfo
// ClassId: 1289
// RuntimeId: 51603
// TypeInfo: 0x0000000144D033A0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/CampaignOperationInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CampaignOperationsInfo : public Core::DataContainer {
        Array<CasablancaShared::CampaignOperationInfo> OperationsList; // 0x18
    }; // 0x20
    static_assert(sizeof(CampaignOperationsInfo) == 0x20);
}
#pragma pack(pop)