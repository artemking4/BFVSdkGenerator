// Object: SpecializationTierRankInfo
// ClassId: 4899
// RuntimeId: 44468
// TypeInfo: 0x0000000144D50E50
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SpecializationTierRankInfo : public Core::DataContainer {
        Int32 PrevTierRequiredRankStatValue; // 0x18
        Int32 PrevTierRequiredRank; // 0x1C
        Int32 RequiredRankStatValue; // 0x20
        Int32 RequiredRank; // 0x24
        Int32 NetworkedRank; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(SpecializationTierRankInfo) == 0x30);
}
#pragma pack(pop)