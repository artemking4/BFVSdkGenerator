// Object: DakarBudgetItemData
// ClassId: 246
// RuntimeId: 5495
// TypeInfo: 0x0000000144C7C980
#include "../Core/Asset.h"
#include "../CasablancaShared/GameSettingNode.h"
#include "../Casablanca/DakarBudgetSubItemData.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DakarBudgetItemData : public Core::Asset {
        CasablancaShared::GameSettingNode Chance; // 0x20
        Array<Casablanca::DakarBudgetSubItemData> SubItems; // 0x28
    }; // 0x30
    static_assert(sizeof(DakarBudgetItemData) == 0x30);
}
#pragma pack(pop)