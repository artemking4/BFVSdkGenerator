// Object: DakarSpartaShowEndOfRoundPayload
// ClassId: 4810
// RuntimeId: 12279
// TypeInfo: 0x0000000144C6EC20
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Uint64.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DakarSpartaShowEndOfRoundPayload : public SpartaShared::SpartaPayload {
        Uint64 RoundId; // 0x18
        Boolean IsSpectator; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(DakarSpartaShowEndOfRoundPayload) == 0x28);
}
#pragma pack(pop)