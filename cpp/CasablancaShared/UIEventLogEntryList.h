// Object: UIEventLogEntryList
// ClassId: 5397
// RuntimeId: 60654
// TypeInfo: 0x0000000144D1DD20
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIEventLogEntry.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIEventLogEntryList : public Core::DataContainer {
        Array<CasablancaShared::UIEventLogEntry> Entries; // 0x18
    }; // 0x20
    static_assert(sizeof(UIEventLogEntryList) == 0x20);
}
#pragma pack(pop)