// Object: CasablancaSpartaHostCoopRequest
// ClassId: 4786
// RuntimeId: 47675
// TypeInfo: 0x0000000144C72EA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaHostCoopRequest : public SpartaShared::SpartaPayload {
        CString LevelPath; // 0x18
        CString GameMode; // 0x20
        CString OverallGameMode; // 0x28
        CString StartPoint; // 0x30
        Uint32 DifficultyIndex; // 0x38
        char pad_0x3C[0x4];
        CString ServerId; // 0x40
    }; // 0x48
    static_assert(sizeof(CasablancaSpartaHostCoopRequest) == 0x48);
}
#pragma pack(pop)