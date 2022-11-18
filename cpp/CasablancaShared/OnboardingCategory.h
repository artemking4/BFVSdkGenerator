// Object: OnboardingCategory
// ClassId: 4386
// RuntimeId: 65233
// TypeInfo: 0x0000000144D88520
#include "../CasablancaShared/OnboardingObjectBase.h"
#include "../CasablancaShared/OnboardingTutorial.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class OnboardingCategory : public CasablancaShared::OnboardingObjectBase {
        Array<CasablancaShared::OnboardingTutorial> Tutorials; // 0x28
    }; // 0x30
    static_assert(sizeof(OnboardingCategory) == 0x30);
}
#pragma pack(pop)