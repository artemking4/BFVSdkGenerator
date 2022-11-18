// Object: UITooltipBase
// ClassId: 5444
// RuntimeId: 27252
// TypeInfo: 0x0000000144C7F000
#include "../CasablancaShared/UIItemDescription.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/UIInputActionAxisDisplay.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UITooltipBase : public CasablancaShared::UIItemDescription {
        CString Name; // 0x28
        Uint32 NameHash; // 0x30
        char pad_0x34[0x4];
        CString StringSid; // 0x38
        CasablancaShared::UIInputActionAxisDisplay Axis; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(UITooltipBase) == 0x48);
}
#pragma pack(pop)