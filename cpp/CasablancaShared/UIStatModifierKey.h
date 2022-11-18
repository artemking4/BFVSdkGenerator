// Object: UIStatModifierKey
// ClassId: 5538
// RuntimeId: 30764
// TypeInfo: 0x0000000144D98690
#include "../Core/DataContainer.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

namespace CasablancaShared {
    class UIStatModifierKey : public Core::DataContainer {
        Guid UnlockGuid; // 0x18
        CString StatName; // 0x28
        Int32 StatId; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UIStatModifierKey) == 0x38);
}