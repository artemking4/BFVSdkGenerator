// Object: BFUIOnboardingCategoryList
// ClassId: 1231
// RuntimeId: 11137
// TypeInfo: 0x0000000144D884A0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/OnboardingCategory.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIOnboardingCategoryList : public Core::DataContainer {
        Array<CasablancaShared::OnboardingCategory> Categories; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIOnboardingCategoryList) == 0x20);
}
#pragma pack(pop)