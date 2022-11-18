// Object: OnboardingCategoryConfig
// ClassId: 4389
// RuntimeId: 20562
// TypeInfo: 0x0000000144D88320
#include "../CasablancaShared/OnboardingObjectBaseConfig.h"
#include "../CasablancaShared/OnboardingTutorialConfig.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class OnboardingCategoryConfig : public CasablancaShared::OnboardingObjectBaseConfig {
        Array<CasablancaShared::OnboardingTutorialConfig> Tutorials; // 0x28
    }; // 0x30
    static_assert(sizeof(OnboardingCategoryConfig) == 0x30);
}
#pragma pack(pop)