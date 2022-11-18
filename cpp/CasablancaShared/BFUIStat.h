// Object: BFUIStat
// ClassId: 1252
// RuntimeId: 42666
// TypeInfo: 0x0000000144D823A0
#include "../Core/DataContainer.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

namespace CasablancaShared {
    class BFUIStat : public Core::DataContainer {
        UIIncubatorShared::LocalizedStringId NameSid; // 0x18
        CString StatName; // 0x20
        Int32 StatId; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(BFUIStat) == 0x30);
}