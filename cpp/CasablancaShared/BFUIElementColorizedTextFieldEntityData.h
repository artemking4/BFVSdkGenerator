// Object: BFUIElementColorizedTextFieldEntityData
// ClassId: 3671
// RuntimeId: 25448
// TypeInfo: 0x0000000144D9CC90
#include "../CasablancaShared/BFUIElementTextFieldEntityData.h"
#include "../CasablancaShared/BFUIColorizationData.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementColorizedTextFieldEntityData : public CasablancaShared::BFUIElementTextFieldEntityData {
        CasablancaShared::BFUIColorizationData ColorizationData; // 0x1A0
        char pad_0x1AC[0x4];
    }; // 0x1B0
    static_assert(sizeof(BFUIElementColorizedTextFieldEntityData) == 0x1B0);
}
#pragma pack(pop)