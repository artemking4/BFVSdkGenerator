// Object: ArmorVestLootItemEntityAsset
// ClassId: 304
// RuntimeId: 14210
// TypeInfo: 0x0000000144D01BA0
#include "../Core/DataContainerPolicyAsset.h"
#include "../CasablancaShared/ArmorVestLootItemEntityData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ArmorVestLootItemEntityAsset : public Core::DataContainerPolicyAsset {
        CasablancaShared::ArmorVestLootItemEntityData Data; // 0x20
    }; // 0x28
    static_assert(sizeof(ArmorVestLootItemEntityAsset) == 0x28);
}
#pragma pack(pop)