// Object: CasablancaContinueCampaignMessage
// ClassId: 4764
// RuntimeId: 15972
// TypeInfo: 0x0000000144C730A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaContinueCampaignMessage : public SpartaShared::SpartaPayload {
        CString LevelName; // 0x18
        CString GameMode; // 0x20
        Int32 LevelDifficulty; // 0x28
        Int32 EpisodeIndex; // 0x2C
        Boolean ResumeFromCheckPoint; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(CasablancaContinueCampaignMessage) == 0x38);
}
#pragma pack(pop)