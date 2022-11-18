// Object: BFUIElementColorizedFillEntityData
// ClassId: 3652
// RuntimeId: 18788
// TypeInfo: 0x0000000144D9CB90
#include "../CasablancaShared/BFUIElementFillEntityData.h"
#include "../CasablancaShared/BFUIColorizationData.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementColorizedFillEntityData : public CasablancaShared::BFUIElementFillEntityData {
        CasablancaShared::BFUIColorizationData ColorizationData; // 0x150
        char pad_0x15C[0x4];
    }; // 0x160
    static_assert(sizeof(BFUIElementColorizedFillEntityData) == 0x160);
}
#pragma pack(pop)