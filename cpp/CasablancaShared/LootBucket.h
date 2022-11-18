// Object: LootBucket
// ClassId: 368
// RuntimeId: 61637
// TypeInfo: 0x0000000144D024A0
#include "../CasablancaShared/LootBase.h"
#include "../CasablancaShared/LootWithWeight.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LootBucket : public CasablancaShared::LootBase {
        Array<CasablancaShared::LootWithWeight> Loot; // 0x28
    }; // 0x30
    static_assert(sizeof(LootBucket) == 0x30);
}
#pragma pack(pop)