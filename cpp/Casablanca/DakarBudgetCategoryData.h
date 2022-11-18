// Object: DakarBudgetCategoryData
// ClassId: 245
// RuntimeId: 29943
// TypeInfo: 0x0000000144C7C900
#include "../Core/Asset.h"
#include "../CasablancaShared/GameSettingNode.h"
#include "../Casablanca/DakarBudgetItemData.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DakarBudgetCategoryData : public Core::Asset {
        CasablancaShared::GameSettingNode Budget; // 0x20
        Array<Casablanca::DakarBudgetItemData> ItemsInCategory; // 0x28
    }; // 0x30
    static_assert(sizeof(DakarBudgetCategoryData) == 0x30);
}
#pragma pack(pop)