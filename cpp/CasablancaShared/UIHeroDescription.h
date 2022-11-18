// Object: UIHeroDescription
// ClassId: 5442
// RuntimeId: 46914
// TypeInfo: 0x0000000144D99E90
#include "../CasablancaShared/UISoldierBodyDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIHeroDescription : public CasablancaShared::UISoldierBodyDescription {
        UIIncubatorShared::LocalizedStringId FactionSid; // 0x48
        CString FactionImagePath; // 0x50
        CString LargeOfferTexturePath; // 0x58
        CString MediumOfferTexturePath; // 0x60
        UIIncubatorShared::LocalizedStringId AdditionalInfoSid; // 0x68
        UIIncubatorShared::LocalizedStringId PlaceOfBirthSid; // 0x70
    }; // 0x78
    static_assert(sizeof(UIHeroDescription) == 0x78);
}
#pragma pack(pop)