// Object: OnboardingObjectBaseConfig
// ClassId: 4388
// RuntimeId: 2336
// TypeInfo: 0x0000000144D88420
#include "../Core/DataContainer.h"
#include "../UIIncubatorShared/LocalizedStringId.h"

namespace CasablancaShared {
    class OnboardingObjectBaseConfig : public Core::DataContainer {
        UIIncubatorShared::LocalizedStringId TitleSid; // 0x18
        UIIncubatorShared::LocalizedStringId DescSid; // 0x20
    }; // 0x28
    static_assert(sizeof(OnboardingObjectBaseConfig) == 0x28);
}