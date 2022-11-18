// Object: BFUISoldierClassCompareEntityData
// ClassId: 2311
// RuntimeId: 13487
// TypeInfo: 0x0000000144D81320
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUISoldierClassObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierClassCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUISoldierClassObject A; // 0x28
        CasablancaShared::BFUISoldierClassObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUISoldierClassCompareEntityData) == 0x38);
}
#pragma pack(pop)