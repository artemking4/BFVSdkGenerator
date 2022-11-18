// Object: BFUIAppearanceSetInstanceCompareEntityData
// ClassId: 2308
// RuntimeId: 15861
// TypeInfo: 0x0000000144D80FA0
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIAppearanceSetInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIAppearanceSetInstanceCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIAppearanceSetInstanceObject A; // 0x28
        CasablancaShared::BFUIAppearanceSetInstanceObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIAppearanceSetInstanceCompareEntityData) == 0x38);
}
#pragma pack(pop)