// Object: BFIncomingSpartaUserId
// ClassId: 1195
// RuntimeId: 60306
// TypeInfo: 0x0000000144C70220
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint64.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFIncomingSpartaUserId : public Core::DataContainer {
        Uint64 XUid; // 0x18
        Uint64 NucleusId; // 0x20
        Uint64 PersonaId; // 0x28
        Uint64 PersonaName; // 0x30
        CString SceNpId; // 0x38
    }; // 0x40
    static_assert(sizeof(BFIncomingSpartaUserId) == 0x40);
}
#pragma pack(pop)