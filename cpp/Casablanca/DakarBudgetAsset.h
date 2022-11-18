// Object: DakarBudgetAsset
// ClassId: 244
// RuntimeId: 45532
// TypeInfo: 0x0000000144C7C880
#include "../Core/Asset.h"
#include "../Casablanca/DakarBudgetCategoryData.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DakarBudgetAsset : public Core::Asset {
        Array<Casablanca::DakarBudgetCategoryData> Categories; // 0x20
    }; // 0x28
    static_assert(sizeof(DakarBudgetAsset) == 0x28);
}
#pragma pack(pop)