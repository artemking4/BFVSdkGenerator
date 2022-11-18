// Object: BFUIAppearanceSetCompareEntityData
// ClassId: 2307
// RuntimeId: 6833
// TypeInfo: 0x0000000144D81020
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIAppearanceSetObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIAppearanceSetCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIAppearanceSetObject A; // 0x28
        CasablancaShared::BFUIAppearanceSetObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIAppearanceSetCompareEntityData) == 0x38);
}
#pragma pack(pop)