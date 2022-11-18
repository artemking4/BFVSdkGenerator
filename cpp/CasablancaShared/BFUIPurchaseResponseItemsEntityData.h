// Object: BFUIPurchaseResponseItemsEntityData
// ClassId: 2364
// RuntimeId: 23334
// TypeInfo: 0x0000000144D85620
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../CasablancaShared/BFUIPurchaseResponseItemCollection.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPurchaseResponseItemsEntityData : public Entity::EntityData {
        CString UIObjectListType; // 0x20
        CasablancaShared::BFUIPurchaseResponseItemCollection ResponseCollection; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIPurchaseResponseItemsEntityData) == 0x30);
}
#pragma pack(pop)