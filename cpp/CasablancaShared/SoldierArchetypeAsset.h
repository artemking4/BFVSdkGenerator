// Object: SoldierArchetypeAsset
// ClassId: 386
// RuntimeId: 36666
// TypeInfo: 0x0000000144D5CFE0
#include "../Core/DataContainerPolicyAsset.h"
#include "../CasablancaShared/SoldierClassAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SoldierArchetypeAsset : public Core::DataContainerPolicyAsset {
        CasablancaShared::SoldierClassAsset Class; // 0x20
    }; // 0x28
    static_assert(sizeof(SoldierArchetypeAsset) == 0x28);
}
#pragma pack(pop)