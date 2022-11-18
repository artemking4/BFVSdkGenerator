// Object: UIWeaponScopeAppearanceDescription
// ClassId: 5419
// RuntimeId: 9901
// TypeInfo: 0x0000000144D99210
#include "../CasablancaShared/UIAppearanceDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIWeaponScopeAppearanceDescription : public CasablancaShared::UIAppearanceDescription {
        UIIncubatorShared::LocalizedStringId ScopeDescriptionSid; // 0x60
        UIIncubatorShared::LocalizedStringId ZoomLevelSid; // 0x68
        CString ReticleImagePath; // 0x70
    }; // 0x78
    static_assert(sizeof(UIWeaponScopeAppearanceDescription) == 0x78);
}
#pragma pack(pop)