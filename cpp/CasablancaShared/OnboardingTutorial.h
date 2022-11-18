// Object: OnboardingTutorial
// ClassId: 4387
// RuntimeId: 38937
// TypeInfo: 0x0000000144D80120
#include "../CasablancaShared/OnboardingObjectBase.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class OnboardingTutorial : public CasablancaShared::OnboardingObjectBase {
        CString TutorialSubLevelName; // 0x28
    }; // 0x30
    static_assert(sizeof(OnboardingTutorial) == 0x30);
}
#pragma pack(pop)