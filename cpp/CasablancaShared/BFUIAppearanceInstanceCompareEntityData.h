// Object: BFUIAppearanceInstanceCompareEntityData
// ClassId: 2306
// RuntimeId: 21275
// TypeInfo: 0x0000000144D810A0
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIAppearanceInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIAppearanceInstanceCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIAppearanceInstanceObject A; // 0x28
        CasablancaShared::BFUIAppearanceInstanceObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIAppearanceInstanceCompareEntityData) == 0x38);
}
#pragma pack(pop)