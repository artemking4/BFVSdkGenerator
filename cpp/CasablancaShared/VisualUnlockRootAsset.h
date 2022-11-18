// Object: VisualUnlockRootAsset
// ClassId: 446
// RuntimeId: 52334
// TypeInfo: 0x0000000144D50750
#include "../CasablancaShared/VisualUnlockInternalBaseAsset.h"
#include "../CasablancaShared/VisualUnlockPartAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VisualUnlockRootAsset : public CasablancaShared::VisualUnlockInternalBaseAsset {
        Array<CasablancaShared::VisualUnlockPartAsset> VisualParts; // 0x118
    }; // 0x120
    static_assert(sizeof(VisualUnlockRootAsset) == 0x120);
}
#pragma pack(pop)