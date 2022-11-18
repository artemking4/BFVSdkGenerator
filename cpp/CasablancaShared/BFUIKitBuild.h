// Object: BFUIKitBuild
// ClassId: 1217
// RuntimeId: 20494
// TypeInfo: 0x0000000144D4C5F0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIPlayerKitObject.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIKitBuild : public Core::DataContainer {
        CasablancaShared::BFUIPlayerKitObject Kit; // 0x18
        Int32 Index; // 0x20
        char pad_0x24[0x4];
        CString Name; // 0x28
        Boolean IsUsed; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFUIKitBuild) == 0x38);
}
#pragma pack(pop)