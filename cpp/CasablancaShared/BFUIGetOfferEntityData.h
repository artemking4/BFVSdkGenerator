// Object: BFUIGetOfferEntityData
// ClassId: 2232
// RuntimeId: 61653
// TypeInfo: 0x0000000144D85CA0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetOfferEntityData : public Entity::EntityData {
        CString UIObjectType; // 0x20
        CString UIObjectListType; // 0x28
        Boolean AllowOffersInGame; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFUIGetOfferEntityData) == 0x38);
}
#pragma pack(pop)