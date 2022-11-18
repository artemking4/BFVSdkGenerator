// Object: CasablancaSpartaBattlepackRevealMessage
// ClassId: 4773
// RuntimeId: 37312
// TypeInfo: 0x0000000144C75030
#include "../SpartaShared/SpartaPayload.h"
#include "../CasablancaShared/BattlepackItem.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaBattlepackRevealMessage : public SpartaShared::SpartaPayload {
        Array<CasablancaShared::BattlepackItem> Items; // 0x18
        CasablancaShared::BattlepackItem RevealItem; // 0x20
    }; // 0x28
    static_assert(sizeof(CasablancaSpartaBattlepackRevealMessage) == 0x28);
}
#pragma pack(pop)