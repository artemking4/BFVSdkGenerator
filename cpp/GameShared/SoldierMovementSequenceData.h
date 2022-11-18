// Object: SoldierMovementSequenceData
// ClassId: 4319
// RuntimeId: 48627
// TypeInfo: 0x0000000144E8F460
#include "../GameShared/MovementActionData.h"
#include "../GameShared/RecordedInputData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class SoldierMovementSequenceData : public GameShared::MovementActionData {
        GameShared::RecordedInputData RecordedInput; // 0x18
        Int32 InputRecordingIndex; // 0x20
        Boolean IgnoreRecordingIndexFilter; // 0x24
        Boolean ReportWhenFinished; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(SoldierMovementSequenceData) == 0x28);
}
#pragma pack(pop)