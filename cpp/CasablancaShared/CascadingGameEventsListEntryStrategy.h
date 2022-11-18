// Object: CascadingGameEventsListEntryStrategy
// ClassId: 4081
// RuntimeId: 24049
// TypeInfo: 0x0000000144D1E570
#include "../CasablancaShared/GameEventsListEntryStrategy.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CascadingGameEventsListEntryStrategy : public CasablancaShared::GameEventsListEntryStrategy {
        Float32 MinTimeBetweenNewRows; // 0x18
        Float32 MinRowTimeToLive; // 0x1C
    }; // 0x20
    static_assert(sizeof(CascadingGameEventsListEntryStrategy) == 0x20);
}
#pragma pack(pop)