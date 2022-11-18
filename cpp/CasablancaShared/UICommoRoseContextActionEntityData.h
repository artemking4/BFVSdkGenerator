// Object: UICommoRoseContextActionEntityData
// ClassId: 3615
// RuntimeId: 30639
// TypeInfo: 0x0000000144D2FD20
#include "../CasablancaShared/UICommoRoseActionEntityData.h"
#include "../CasablancaShared/OrderType.h"
#include "../CasablancaShared/UIObjectiveData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UICommoRoseContextActionEntityData : public CasablancaShared::UICommoRoseActionEntityData {
        CasablancaShared::OrderType ContextOrderType; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::UIObjectiveData UIObjectiveData; // 0x28
    }; // 0x30
    static_assert(sizeof(UICommoRoseContextActionEntityData) == 0x30);
}
#pragma pack(pop)