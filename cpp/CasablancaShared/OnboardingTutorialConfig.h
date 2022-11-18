// Object: OnboardingTutorialConfig
// ClassId: 4390
// RuntimeId: 43267
// TypeInfo: 0x0000000144D883A0
#include "../CasablancaShared/OnboardingObjectBaseConfig.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class OnboardingTutorialConfig : public CasablancaShared::OnboardingObjectBaseConfig {
        CString TutorialSubLevelName; // 0x28
    }; // 0x30
    static_assert(sizeof(OnboardingTutorialConfig) == 0x30);
}
#pragma pack(pop)