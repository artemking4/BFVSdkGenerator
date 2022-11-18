// Object: BFUITypingInputListenerElementEntityData
// ClassId: 3680
// RuntimeId: 23307
// TypeInfo: 0x0000000144D9A590
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUITypingInputListenerElementEntityData : public CasablancaShared::BFUIElementEntityData {
        Uint32 MaxTextLength; // 0x130
        char pad_0x134[0x4];
        CString VKbdDefaultText; // 0x138
        CString VKbdTitle; // 0x140
        CString VKbdDescription; // 0x148
        CString InputText; // 0x150
        Boolean VKbdIsPassword; // 0x158
        Boolean AllowMultiline; // 0x159
        Boolean AbortOnEscape; // 0x15A
        char pad_0x15B[0x5];
    }; // 0x160
    static_assert(sizeof(BFUITypingInputListenerElementEntityData) == 0x160);
}
#pragma pack(pop)