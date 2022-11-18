// Object: FriendlyScoreEvent
// ClassId: 1644
// RuntimeId: 3733
// TypeInfo: 0x0000000144D43ED0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FriendlyScoreEvent : public Core::DataContainer {
        CString PlayerName; // 0x18
        Int32 EventType; // 0x20
        Boolean IsSquadMate; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(FriendlyScoreEvent) == 0x28);
}
#pragma pack(pop)