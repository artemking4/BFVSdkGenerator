// Object: UIAllObjectivesData
// ClassId: 5378
// RuntimeId: 22235
// TypeInfo: 0x0000000144D886A0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIObjectiveData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIAllObjectivesData : public Core::DataContainer {
        Array<CasablancaShared::UIObjectiveData> Objectives; // 0x18
    }; // 0x20
    static_assert(sizeof(UIAllObjectivesData) == 0x20);
}
#pragma pack(pop)