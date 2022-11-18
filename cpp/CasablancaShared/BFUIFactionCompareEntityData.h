// Object: BFUIFactionCompareEntityData
// ClassId: 2309
// RuntimeId: 57912
// TypeInfo: 0x0000000144D813A0
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIFactionObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIFactionCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIFactionObject A; // 0x28
        CasablancaShared::BFUIFactionObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIFactionCompareEntityData) == 0x38);
}
#pragma pack(pop)