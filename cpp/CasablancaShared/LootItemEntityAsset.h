// Object: LootItemEntityAsset
// ClassId: 370
// RuntimeId: 33080
// TypeInfo: 0x0000000144D01C20
#include "../Core/DataContainerPolicyAsset.h"
#include "../CasablancaShared/LootItemEntityData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LootItemEntityAsset : public Core::DataContainerPolicyAsset {
        CasablancaShared::LootItemEntityData Data; // 0x20
    }; // 0x28
    static_assert(sizeof(LootItemEntityAsset) == 0x28);
}
#pragma pack(pop)