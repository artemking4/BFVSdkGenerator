// Object: BFUIFactionFilterEntityBaseData
// ClassId: 2200
// RuntimeId: 39045
// TypeInfo: 0x0000000144D819A0
#include "../CasablancaShared/BFUIFilterEntityBaseData.h"
#include "../Global/Boolean.h"

namespace CasablancaShared {
    class BFUIFactionFilterEntityBaseData : public CasablancaShared::BFUIFilterEntityBaseData {
        Boolean IncludeInvalidFaction; // 0x28
        Boolean ExcludeInvalidFaction; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(BFUIFactionFilterEntityBaseData) == 0x30);
}