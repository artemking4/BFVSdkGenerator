// Object: GameEventsListCellWidgetData
// ClassId: 3805
// RuntimeId: 26955
// TypeInfo: 0x0000000144D1E3F0
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class GameEventsListCellWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Uint32 TypeNameHash; // 0x80
        Int32 Priority; // 0x84
        Float32 HeightOverride; // 0x88
        Boolean TimeToLiveOverride; // 0x8C
        char pad_0x8D[0x3];
    }; // 0x90
    static_assert(sizeof(GameEventsListCellWidgetData) == 0x90);
}
#pragma pack(pop)