// Object: BFUISoldierFilterEntityData
// ClassId: 2196
// RuntimeId: 16280
// TypeInfo: 0x0000000144D818A0
#include "../CasablancaShared/BFUIClassFilterEntityBaseData.h"
#include "../CasablancaShared/BFUISoldierClassObject.h"
#include "../CasablancaShared/BFUISoldierInstanceObjectList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierFilterEntityData : public CasablancaShared::BFUIClassFilterEntityBaseData {
        CasablancaShared::BFUISoldierClassObject IncludeSoldierClass; // 0x30
        CasablancaShared::BFUISoldierClassObject ExcludeSoldierClass; // 0x38
        CasablancaShared::BFUISoldierInstanceObjectList In; // 0x40
    }; // 0x48
    static_assert(sizeof(BFUISoldierFilterEntityData) == 0x48);
}
#pragma pack(pop)