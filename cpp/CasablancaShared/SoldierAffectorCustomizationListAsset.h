// Object: SoldierAffectorCustomizationListAsset
// ClassId: 735
// RuntimeId: 43175
// TypeInfo: 0x0000000144D5CC60
#include "../Core/Asset.h"
#include "../CasablancaShared/SoldierAffectorCustomization.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SoldierAffectorCustomizationListAsset : public Core::Asset {
        Array<CasablancaShared::SoldierAffectorCustomization> Affectors; // 0x20
    }; // 0x28
    static_assert(sizeof(SoldierAffectorCustomizationListAsset) == 0x28);
}
#pragma pack(pop)