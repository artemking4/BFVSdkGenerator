// Object: BattlepackPayloadMessage
// ClassId: 4753
// RuntimeId: 32507
// TypeInfo: 0x0000000144C75230
#include "../SpartaShared/SpartaPayload.h"
#include "../CasablancaShared/BattlepackItem.h"

namespace Casablanca {
    class BattlepackPayloadMessage : public SpartaShared::SpartaPayload {
        CasablancaShared::BattlepackItem Item; // 0x18
    }; // 0x20
    static_assert(sizeof(BattlepackPayloadMessage) == 0x20);
}