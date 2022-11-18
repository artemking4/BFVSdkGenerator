// Object: CasablancaSpartaCampaignInfoResponse
// ClassId: 4774
// RuntimeId: 33352
// TypeInfo: 0x0000000144C72520
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/CasEpisode.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaCampaignInfoResponse : public SpartaShared::SpartaPayload {
        Array<Casablanca::CasEpisode> Episodes; // 0x18
        CString LastPlayedSpLevelName; // 0x20
        Int32 LastPlayedSpDifficulty; // 0x28
        Int32 LastPlayedSpEpisode; // 0x2C
    }; // 0x30
    static_assert(sizeof(CasablancaSpartaCampaignInfoResponse) == 0x30);
}
#pragma pack(pop)