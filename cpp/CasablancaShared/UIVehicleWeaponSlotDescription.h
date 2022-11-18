// Object: UIVehicleWeaponSlotDescription
// ClassId: 5459
// RuntimeId: 30746
// TypeInfo: 0x0000000144D99510
#include "../CasablancaShared/UIItemDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIVehicleWeaponSlotDescription : public CasablancaShared::UIItemDescription {
        UIIncubatorShared::LocalizedStringId NameSid; // 0x28
        CString ImagePath; // 0x30
    }; // 0x38
    static_assert(sizeof(UIVehicleWeaponSlotDescription) == 0x38);
}
#pragma pack(pop)