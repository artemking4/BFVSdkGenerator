// Object: CasablancaSpartaEquipBattlepackItemFinishedMessage
// ClassId: 4780
// RuntimeId: 49852
// TypeInfo: 0x0000000144C743B0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaEquipBattlepackItemFinishedMessage : public SpartaShared::SpartaPayload {
        Boolean Result; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(CasablancaSpartaEquipBattlepackItemFinishedMessage) == 0x20);
}
#pragma pack(pop)