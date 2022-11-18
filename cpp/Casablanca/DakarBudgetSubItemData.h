// Object: DakarBudgetSubItemData
// ClassId: 335
// RuntimeId: 35692
// TypeInfo: 0x0000000144C7CA00
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DakarBudgetSubItemData : public Core::DataContainerPolicyAsset {
        CString ItemBlueprintName; // 0x20
        CString UsefulName; // 0x28
    }; // 0x30
    static_assert(sizeof(DakarBudgetSubItemData) == 0x30);
}
#pragma pack(pop)