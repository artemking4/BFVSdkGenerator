// Object: DakarUISoldierFilterEntityData
// ClassId: 2199
// RuntimeId: 47040
// TypeInfo: 0x0000000144D664F0
#include "../CasablancaShared/BFUIClassFilterEntityBaseData.h"
#include "../Global/Guid.h"
#include "../CasablancaShared/BFUISoldierInstanceObjectList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarUISoldierFilterEntityData : public CasablancaShared::BFUIClassFilterEntityBaseData {
        Array<Guid> SoldierKitIds; // 0x30
        CasablancaShared::BFUISoldierInstanceObjectList In; // 0x38
    }; // 0x40
    static_assert(sizeof(DakarUISoldierFilterEntityData) == 0x40);
}
#pragma pack(pop)