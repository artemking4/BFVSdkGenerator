// Object: BFUIElementColorizedBitmapEntityData
// ClassId: 3643
// RuntimeId: 6114
// TypeInfo: 0x0000000144D9CC10
#include "../CasablancaShared/BFUIElementBitmapEntityData.h"
#include "../CasablancaShared/BFUIColorizationData.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementColorizedBitmapEntityData : public CasablancaShared::BFUIElementBitmapEntityData {
        CasablancaShared::BFUIColorizationData ColorizationData; // 0x190
        char pad_0x19C[0x4];
    }; // 0x1A0
    static_assert(sizeof(BFUIElementColorizedBitmapEntityData) == 0x1A0);
}
#pragma pack(pop)