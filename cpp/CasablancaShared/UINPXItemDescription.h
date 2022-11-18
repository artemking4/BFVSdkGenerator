// Object: UINPXItemDescription
// ClassId: 5431
// RuntimeId: 14499
// TypeInfo: 0x0000000144D99790
#include "../CasablancaShared/UIItemDescription.h"
#include "../Global/CString.h"

namespace CasablancaShared {
    class UINPXItemDescription : public CasablancaShared::UIItemDescription {
        CString VideoNPXAssetPath; // 0x28
    }; // 0x30
    static_assert(sizeof(UINPXItemDescription) == 0x30);
}