// Object: BFUIPurchaseOfferEntityData
// ClassId: 2363
// RuntimeId: 8629
// TypeInfo: 0x0000000144D85B20
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIOffer.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPurchaseOfferEntityData : public Entity::EntityData {
        CasablancaShared::BFUIOffer Offer; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIPurchaseOfferEntityData) == 0x28);
}
#pragma pack(pop)