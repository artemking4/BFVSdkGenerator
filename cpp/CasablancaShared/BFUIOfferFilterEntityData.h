// Object: BFUIOfferFilterEntityData
// ClassId: 2328
// RuntimeId: 30347
// TypeInfo: 0x0000000144D85720
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UIOfferType.h"
#include "../CasablancaShared/UIRarityType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIOfferFilterEntityData : public Entity::EntityData {
        CString UIObjectListType; // 0x20
        Array<CasablancaShared::UIOfferType> IncludeOfferTypes; // 0x28
        CasablancaShared::UIRarityType IncludeRarity; // 0x30
        Boolean IncludeOwnedInstances; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(BFUIOfferFilterEntityData) == 0x38);
}
#pragma pack(pop)