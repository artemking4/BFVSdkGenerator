// Object: RankGateAsset
// ClassId: 683
// RuntimeId: 35466
// TypeInfo: 0x0000000144D87320
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RankGateAsset : public Core::Asset {
        CString GateName; // 0x20
        Int32 MinimumRank; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(RankGateAsset) == 0x30);
}
#pragma pack(pop)