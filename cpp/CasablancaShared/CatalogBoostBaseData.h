// Object: CatalogBoostBaseData
// ClassId: 1295
// RuntimeId: 51173
// TypeInfo: 0x0000000144D65270
#include "../CasablancaShared/CatalogItemData.h"
#include "../DicePersistenceShared/StatContextKeyData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/SphereOfInfluence.h"
#include "../CasablancaShared/StackableLogic.h"

namespace CasablancaShared {
    class CatalogBoostBaseData : public CasablancaShared::CatalogItemData {
        DicePersistenceShared::StatContextKeyData StatContextKey; // 0x40
        DicePersistenceShared::StatContextKeyData DiffStatContextKey; // 0x48
        Float32 IncreaseValue; // 0x50
        CasablancaShared::SphereOfInfluence SphereOfInfluence; // 0x54
        Float32 SOI_IncreaseValue; // 0x58
        CasablancaShared::StackableLogic Stackable; // 0x5C
        Boolean AutoActivate; // 0x60
        char pad_0x61[0x7];
    }; // 0x68
    static_assert(sizeof(CatalogBoostBaseData) == 0x68);
}