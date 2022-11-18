// Object: BFUIKeybinding
// ClassId: 1213
// RuntimeId: 1336
// TypeInfo: 0x0000000144D87A20
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/BFUIKeybindingActionData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIKeybinding : public Core::DataContainer {
        CString ConceptName; // 0x18
        Int32 ConceptIndex; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::BFUIKeybindingActionData> Actions; // 0x28
        Boolean DisablePadBinding; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFUIKeybinding) == 0x38);
}
#pragma pack(pop)