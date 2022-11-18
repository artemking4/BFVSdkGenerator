// Object: BFUIDynamicStringArrayStatEntry
// ClassId: 1208
// RuntimeId: 59576
// TypeInfo: 0x0000000144D82320
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIDynamicStringArrayStatEntry : public Core::DataContainer {
        CString Value; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIDynamicStringArrayStatEntry) == 0x20);
}
#pragma pack(pop)