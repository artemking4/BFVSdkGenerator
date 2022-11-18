// Object: SpartaFinishLoadingLevelPayload
// ClassId: 4819
// RuntimeId: 28167
// TypeInfo: 0x0000000144F501C0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaFinishLoadingLevelPayload : public SpartaShared::SpartaPayload {
        CString LevelName; // 0x18
        CString GameMode; // 0x20
        CString OverallGameMode; // 0x28
        Boolean IsMultiplayer; // 0x30
        Boolean IsSpectator; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(SpartaFinishLoadingLevelPayload) == 0x38);
}
#pragma pack(pop)