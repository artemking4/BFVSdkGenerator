// Object: LootClusterList
// ClassId: 551
// RuntimeId: 9315
// TypeInfo: 0x0000000144D020A0
#include "../Core/Asset.h"
#include "../CasablancaShared/LootClusterDefinition.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LootClusterList : public Core::Asset {
        Array<CasablancaShared::LootClusterDefinition> LootClusters; // 0x20
    }; // 0x28
    static_assert(sizeof(LootClusterList) == 0x28);
}
#pragma pack(pop)