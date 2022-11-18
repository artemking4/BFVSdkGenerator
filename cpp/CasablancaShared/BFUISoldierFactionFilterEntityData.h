// Object: BFUISoldierFactionFilterEntityData
// ClassId: 2201
// RuntimeId: 6128
// TypeInfo: 0x0000000144D81820
#include "../CasablancaShared/BFUIFactionFilterEntityBaseData.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/BFUISoldierInstanceObjectList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierFactionFilterEntityData : public CasablancaShared::BFUIFactionFilterEntityBaseData {
        CasablancaShared::BFUIFactionObject IncludeFaction; // 0x30
        CasablancaShared::BFUIFactionObject ExcludeFaction; // 0x38
        CasablancaShared::BFUISoldierInstanceObjectList In; // 0x40
    }; // 0x48
    static_assert(sizeof(BFUISoldierFactionFilterEntityData) == 0x48);
}
#pragma pack(pop)