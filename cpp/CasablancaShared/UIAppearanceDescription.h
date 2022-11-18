// Object: UIAppearanceDescription
// ClassId: 5418
// RuntimeId: 7421
// TypeInfo: 0x0000000144D99310
#include "../CasablancaShared/UIGenericUnlockMetaData.h"
#include "../CasablancaShared/AppearanceType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIAppearanceDescription : public CasablancaShared::UIGenericUnlockMetaData {
        CasablancaShared::AppearanceType AppearanceType; // 0x58
        char pad_0x5C[0x4];
    }; // 0x60
    static_assert(sizeof(UIAppearanceDescription) == 0x60);
}
#pragma pack(pop)