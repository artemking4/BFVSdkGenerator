// Object: UILicenseDescription
// ClassId: 5429
// RuntimeId: 9522
// TypeInfo: 0x0000000144D99010
#include "../CasablancaShared/UIItemDescription.h"
#include "../Global/CString.h"
#include "../UIIncubatorShared/LocalizedStringId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UILicenseDescription : public CasablancaShared::UIItemDescription {
        CString LicenseId; // 0x28
        UIIncubatorShared::LocalizedStringId NameSid; // 0x30
        UIIncubatorShared::LocalizedStringId PopupTextSid; // 0x38
    }; // 0x40
    static_assert(sizeof(UILicenseDescription) == 0x40);
}
#pragma pack(pop)