// Object: BFUIOnboardingTutorialsEntityData
// ClassId: 2329
// RuntimeId: 55604
// TypeInfo: 0x0000000144D88220
#include "../Entity/EntityData.h"
#include "../CasablancaShared/OnboardingTutorial.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIOnboardingTutorialsEntityData : public Entity::EntityData {
        CasablancaShared::OnboardingTutorial SelectedTutorial; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIOnboardingTutorialsEntityData) == 0x28);
}
#pragma pack(pop)