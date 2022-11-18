// Object: CatalogData
// ClassId: 193
// RuntimeId: 54145
// TypeInfo: 0x0000000144D65470
#include "../Core/Asset.h"
#include "../Global/Guid.h"
#include "../CasablancaShared/SpecializationTreeAsset.h"
#include "../CasablancaShared/CatalogArchetypeData.h"
#include "../CasablancaShared/CatalogLoadoutData.h"
#include "../CasablancaShared/CatalogRuntimeItemData.h"
#include "../CasablancaShared/CatalogRuntimeBoostData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CatalogData : public Core::Asset {
        Array<Guid> SpecializationTreeOwners; // 0x20
        Array<CasablancaShared::SpecializationTreeAsset> SpecializationTrees; // 0x28
        Array<CasablancaShared::CatalogArchetypeData> Archetypes; // 0x30
        Array<CasablancaShared::CatalogLoadoutData> Loadouts; // 0x38
        Array<Guid> CustomizableDefaultItems; // 0x40
        Array<CasablancaShared::CatalogRuntimeItemData> DefaultItems; // 0x48
        Array<CasablancaShared::CatalogRuntimeItemData> CoopPracticeRangeItems; // 0x50
        Array<CasablancaShared::CatalogRuntimeItemData> Items; // 0x58
        Array<CasablancaShared::CatalogRuntimeBoostData> Boosts; // 0x60
        Guid SpecTreeDataHash; // 0x68
        Guid TierGatingHash; // 0x78
    }; // 0x88
    static_assert(sizeof(CatalogData) == 0x88);
}
#pragma pack(pop)