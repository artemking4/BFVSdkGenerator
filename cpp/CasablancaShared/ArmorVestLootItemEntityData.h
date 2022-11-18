// Object: ArmorVestLootItemEntityData
// ClassId: 3311
// RuntimeId: 14268
// TypeInfo: 0x0000000144D026A0
#include "../CasablancaShared/LootItemEntityData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class ArmorVestLootItemEntityData : public CasablancaShared::LootItemEntityData {
        Uint32 ArmorVestTier; // 0x190
        char pad_0x194[0xC];
    }; // 0x1A0
    static_assert(sizeof(ArmorVestLootItemEntityData) == 0x1A0);
}
#pragma pack(pop)