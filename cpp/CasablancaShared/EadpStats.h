// Object: EadpStats
// ClassId: 476
// RuntimeId: 10676
// TypeInfo: 0x0000000144DA0060
#include "../Core/Asset.h"
#include "../CasablancaShared/EadpStatCategoryData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EadpStats : public Core::Asset {
        Array<CasablancaShared::EadpStatCategoryData> StatCategories; // 0x20
    }; // 0x28
    static_assert(sizeof(EadpStats) == 0x28);
}
#pragma pack(pop)