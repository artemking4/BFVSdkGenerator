// Object: BFUIKeybindingSID
// ClassId: 1215
// RuntimeId: 14377
// TypeInfo: 0x0000000144D87B20
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIKeybindingSID : public Core::DataContainer {
        CString Sid; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIKeybindingSID) == 0x20);
}
#pragma pack(pop)