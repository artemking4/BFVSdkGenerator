// Object: SquadAssetBaseData
// ClassId: 395
// RuntimeId: 23621
// TypeInfo: 0x0000000144D34980
#include "../CasablancaShared/SquadItemBase.h"
#include "../CasablancaShared/SquadAssetType.h"

namespace CasablancaShared {
    class SquadAssetBaseData : public CasablancaShared::SquadItemBase {
        CasablancaShared::SquadAssetType AssetType; // 0x68
        char pad_0x6C[0x4];
    }; // 0x70
    static_assert(sizeof(SquadAssetBaseData) == 0x70);
}