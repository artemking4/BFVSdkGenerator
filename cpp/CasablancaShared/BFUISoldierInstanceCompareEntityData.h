// Object: BFUISoldierInstanceCompareEntityData
// ClassId: 2312
// RuntimeId: 20651
// TypeInfo: 0x0000000144D811A0
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierInstanceCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUISoldierInstanceObject A; // 0x28
        CasablancaShared::BFUISoldierInstanceObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUISoldierInstanceCompareEntityData) == 0x38);
}
#pragma pack(pop)