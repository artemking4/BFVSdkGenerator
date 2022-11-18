// Object: ScoreEventCollection
// ClassId: 4583
// RuntimeId: 11500
// TypeInfo: 0x0000000144D43FD0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/ScoreEvent.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ScoreEventCollection : public Core::DataContainer {
        Array<CasablancaShared::ScoreEvent> ScoreEvents; // 0x18
    }; // 0x20
    static_assert(sizeof(ScoreEventCollection) == 0x20);
}
#pragma pack(pop)