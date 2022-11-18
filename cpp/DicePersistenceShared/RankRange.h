// Object: RankRange
// ClassId: 685
// RuntimeId: 33880
// TypeInfo: 0x0000000144DC7800
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../DicePersistenceShared/RankData.h"
#include "../DicePersistenceShared/BaseStatValueType.h"
#include "../DicePersistenceShared/RankRange.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class RankRange : public Core::Asset {
        Float32 MultiplicationValue; // 0x20
        Int32 RankStart; // 0x24
        Int32 RankEnd; // 0x28
        char pad_0x2C[0x4];
        DicePersistenceShared::RankData StartRankGate; // 0x30
        DicePersistenceShared::RankData EndRankGate; // 0x38
        DicePersistenceShared::BaseStatValueType BaseStatValueType; // 0x40
        Int32 BaseRankStatValue_int; // 0x44
        DicePersistenceShared::RankData BaseRankStatValue_RankData; // 0x48
        DicePersistenceShared::RankRange BaseRankStatValue_RankRange; // 0x50
    }; // 0x58
    static_assert(sizeof(RankRange) == 0x58);
}
#pragma pack(pop)