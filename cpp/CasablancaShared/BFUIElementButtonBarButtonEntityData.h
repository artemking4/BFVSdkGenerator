// Object: BFUIElementButtonBarButtonEntityData
// ClassId: 3675
// RuntimeId: 42245
// TypeInfo: 0x0000000144D9CD10
#include "../CasablancaShared/BFUIInputActionListenerElementEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/BFUIConsoleButtonSoundStyle.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementButtonBarButtonEntityData : public CasablancaShared::BFUIInputActionListenerElementEntityData {
        CString Sid; // 0x140
        Int32 SortOrder; // 0x148
        char pad_0x14C[0x4];
        CasablancaShared::BFUIConsoleButtonSoundStyle SoundStyle; // 0x150
        Boolean DrawInPlace; // 0x158
        Boolean Enabled; // 0x159
        char pad_0x15A[0x6];
    }; // 0x160
    static_assert(sizeof(BFUIElementButtonBarButtonEntityData) == 0x160);
}
#pragma pack(pop)