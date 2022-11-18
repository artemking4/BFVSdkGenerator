// Object: BFUISoldierKitCompareEntityData
// ClassId: 2313
// RuntimeId: 29924
// TypeInfo: 0x0000000144D81220
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUISoldierKitObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierKitCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUISoldierKitObject A; // 0x28
        CasablancaShared::BFUISoldierKitObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUISoldierKitCompareEntityData) == 0x38);
}
#pragma pack(pop)