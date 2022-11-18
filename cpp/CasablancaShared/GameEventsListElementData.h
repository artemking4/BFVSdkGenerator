// Object: GameEventsListElementData
// ClassId: 3683
// RuntimeId: 47637
// TypeInfo: 0x0000000144D1E470
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../CasablancaShared/BFUIWidgetBlueprint.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/GameEventsListEntryStrategy.h"
#include "../CasablancaShared/GameEventsListOrigin.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class GameEventsListElementData : public CasablancaShared::BFUIElementEntityData {
        Array<CasablancaShared::BFUIWidgetBlueprint> Blueprints; // 0x130
        Int32 Rows; // 0x138
        Float32 RowTimeToLive; // 0x13C
        CasablancaShared::GameEventsListEntryStrategy EntryStrategy; // 0x140
        CasablancaShared::GameEventsListOrigin Origin; // 0x148
        Boolean PushOldElements; // 0x14C
        Boolean OldToNew; // 0x14D
        char pad_0x14E[0x2];
    }; // 0x150
    static_assert(sizeof(GameEventsListElementData) == 0x150);
}
#pragma pack(pop)