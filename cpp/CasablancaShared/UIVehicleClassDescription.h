// Object: UIVehicleClassDescription
// ClassId: 5457
// RuntimeId: 5217
// TypeInfo: 0x0000000144D99690
#include "../CasablancaShared/UIItemDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIVehicleClassDescription : public CasablancaShared::UIItemDescription {
        UIIncubatorShared::LocalizedStringId NameSid; // 0x28
        UIIncubatorShared::LocalizedStringId NamePluralSid; // 0x30
        UIIncubatorShared::LocalizedStringId DescriptionSid; // 0x38
        CString ImagePath; // 0x40
    }; // 0x48
    static_assert(sizeof(UIVehicleClassDescription) == 0x48);
}
#pragma pack(pop)