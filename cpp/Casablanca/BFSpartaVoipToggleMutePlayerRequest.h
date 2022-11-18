// Object: BFSpartaVoipToggleMutePlayerRequest
// ClassId: 4752
// RuntimeId: 20752
// TypeInfo: 0x0000000144C6EE20
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"
#include "../Global/Uint64.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaVoipToggleMutePlayerRequest : public SpartaShared::SpartaPayload {
        Uint64 PersonaId; // 0x18
        CString DisplayName; // 0x20
        Boolean Mute; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFSpartaVoipToggleMutePlayerRequest) == 0x30);
}
#pragma pack(pop)