// Object: UIOfferUnlockRequirementCollection
// ClassId: 5510
// RuntimeId: 53898
// TypeInfo: 0x0000000144D85FA0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIOfferUnlockRequirement.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIOfferUnlockRequirementCollection : public Core::DataContainer {
        Array<CasablancaShared::UIOfferUnlockRequirement> UnlockRequirements; // 0x18
    }; // 0x20
    static_assert(sizeof(UIOfferUnlockRequirementCollection) == 0x20);
}
#pragma pack(pop)