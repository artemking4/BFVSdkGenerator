// Object: UIOnboardingTutorialConfigAsset
// ClassId: 891
// RuntimeId: 16231
// TypeInfo: 0x0000000144D882A0
#include "../Core/Asset.h"
#include "../CasablancaShared/OnboardingCategoryConfig.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIOnboardingTutorialConfigAsset : public Core::Asset {
        Array<CasablancaShared::OnboardingCategoryConfig> Categories; // 0x20
    }; // 0x28
    static_assert(sizeof(UIOnboardingTutorialConfigAsset) == 0x28);
}
#pragma pack(pop)