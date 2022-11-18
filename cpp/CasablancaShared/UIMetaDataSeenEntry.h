// Object: UIMetaDataSeenEntry
// ClassId: 5472
// RuntimeId: 59733
// TypeInfo: 0x0000000144D9A210
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMetaDataSeenEntry : public Core::DataContainer {
        Int32 Hash; // 0x18
        char pad_0x1C[0x4];
        CString EntryName; // 0x20
        CString DescriptionType; // 0x28
    }; // 0x30
    static_assert(sizeof(UIMetaDataSeenEntry) == 0x30);
}
#pragma pack(pop)