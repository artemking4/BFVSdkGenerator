// Object: SoldierCustomizationCharacterListAsset
// ClassId: 388
// RuntimeId: 20446
// TypeInfo: 0x0000000144D5CBE0
#include "../Core/DataContainerPolicyAsset.h"
#include "../CasablancaShared/SoldierCharacterItem.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SoldierCustomizationCharacterListAsset : public Core::DataContainerPolicyAsset {
        Array<CasablancaShared::SoldierCharacterItem> Characters; // 0x20
    }; // 0x28
    static_assert(sizeof(SoldierCustomizationCharacterListAsset) == 0x28);
}
#pragma pack(pop)