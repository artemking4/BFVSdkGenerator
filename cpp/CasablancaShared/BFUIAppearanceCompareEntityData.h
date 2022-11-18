// Object: BFUIAppearanceCompareEntityData
// ClassId: 2305
// RuntimeId: 57016
// TypeInfo: 0x0000000144D81120
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIAppearanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIAppearanceCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIAppearanceObject A; // 0x28
        CasablancaShared::BFUIAppearanceObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIAppearanceCompareEntityData) == 0x38);
}
#pragma pack(pop)