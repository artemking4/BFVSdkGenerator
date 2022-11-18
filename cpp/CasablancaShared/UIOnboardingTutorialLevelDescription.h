// Object: UIOnboardingTutorialLevelDescription
// ClassId: 4222
// RuntimeId: 783
// TypeInfo: 0x0000000144D2A6A0
#include "../GameShared/LevelDescriptionComponent.h"
#include "../CasablancaShared/UIOnboardingTutorialConfigAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIOnboardingTutorialLevelDescription : public GameShared::LevelDescriptionComponent {
        CasablancaShared::UIOnboardingTutorialConfigAsset config; // 0x18
    }; // 0x20
    static_assert(sizeof(UIOnboardingTutorialLevelDescription) == 0x20);
}
#pragma pack(pop)