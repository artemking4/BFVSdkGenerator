// Object: BFSpartaCampaignOperationsInfo
// ClassId: 1197
// RuntimeId: 33690
// TypeInfo: 0x0000000144D30EA0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/SpartaOperationInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSpartaCampaignOperationsInfo : public Core::DataContainer {
        Int32 ActiveCampaign; // 0x18
        Int32 CompletionCount; // 0x1C
        CString TimeLeftDesc; // 0x20
        CString LockDesc; // 0x28
        CString BattlepackDesc; // 0x30
        CString BattlepackImageId; // 0x38
        Array<CasablancaShared::SpartaOperationInfo> OperationInfoList; // 0x40
        Boolean IsLocked; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(BFSpartaCampaignOperationsInfo) == 0x50);
}
#pragma pack(pop)