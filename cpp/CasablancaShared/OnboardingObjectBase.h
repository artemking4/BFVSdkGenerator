// Object: OnboardingObjectBase
// ClassId: 4385
// RuntimeId: 39463
// TypeInfo: 0x0000000144D885A0
#include "../Core/DataContainer.h"
#include "../UIIncubatorShared/LocalizedStringId.h"

namespace CasablancaShared {
    class OnboardingObjectBase : public Core::DataContainer {
        UIIncubatorShared::LocalizedStringId TitleSid; // 0x18
        UIIncubatorShared::LocalizedStringId DescSid; // 0x20
    }; // 0x28
    static_assert(sizeof(OnboardingObjectBase) == 0x28);
}