// Object: UIVehicleAppearanceSlotDescription
// ClassId: 5456
// RuntimeId: 52011
// TypeInfo: 0x0000000144D99590
#include "../CasablancaShared/UIItemDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIVehicleAppearanceSlotDescription : public CasablancaShared::UIItemDescription {
        UIIncubatorShared::LocalizedStringId NameSid; // 0x28
        CString ImagePath; // 0x30
    }; // 0x38
    static_assert(sizeof(UIVehicleAppearanceSlotDescription) == 0x38);
}
#pragma pack(pop)