// Object: BFUISoldierArchetypeCompareEntityData
// ClassId: 2310
// RuntimeId: 31729
// TypeInfo: 0x0000000144D812A0
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUISoldierArchetypeObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierArchetypeCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUISoldierArchetypeObject A; // 0x28
        CasablancaShared::BFUISoldierArchetypeObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUISoldierArchetypeCompareEntityData) == 0x38);
}
#pragma pack(pop)