// Object: SingleEntryGameEventsListEntryStrategy
// ClassId: 4083
// RuntimeId: 14627
// TypeInfo: 0x0000000144D1E4F0
#include "../CasablancaShared/GameEventsListEntryStrategy.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SingleEntryGameEventsListEntryStrategy : public CasablancaShared::GameEventsListEntryStrategy {
        Float32 MaxWaitTime; // 0x18
        Float32 MinShowTimeForLessPriority; // 0x1C
        Float32 MinShowTimeForHigherPriority; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(SingleEntryGameEventsListEntryStrategy) == 0x28);
}
#pragma pack(pop)