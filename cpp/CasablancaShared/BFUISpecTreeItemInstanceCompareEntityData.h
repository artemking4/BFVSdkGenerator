// Object: BFUISpecTreeItemInstanceCompareEntityData
// ClassId: 2314
// RuntimeId: 24958
// TypeInfo: 0x0000000144D80920
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUISpecTreeItemInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISpecTreeItemInstanceCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUISpecTreeItemInstanceObject A; // 0x28
        CasablancaShared::BFUISpecTreeItemInstanceObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUISpecTreeItemInstanceCompareEntityData) == 0x38);
}
#pragma pack(pop)