// Object: UIOfferUnlockRequirement
// ClassId: 5509
// RuntimeId: 62667
// TypeInfo: 0x0000000144D86020
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../CasablancaShared/UIOfferType.h"
#include "../CasablancaShared/UIOfferUnlockRequirementType.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIOfferUnlockRequirement : public Core::DataContainer {
        CString OfferAlias; // 0x18
        CasablancaShared::UIOfferType OfferType; // 0x20
        CasablancaShared::UIOfferUnlockRequirementType RequirementType; // 0x24
        Int32 Value; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(UIOfferUnlockRequirement) == 0x30);
}
#pragma pack(pop)