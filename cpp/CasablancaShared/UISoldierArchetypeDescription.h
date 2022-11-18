// Object: UISoldierArchetypeDescription
// ClassId: 5440
// RuntimeId: 3391
// TypeInfo: 0x0000000144D99D10
#include "../CasablancaShared/UIItemDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"
#include "../CasablancaShared/UISoldierArchetypeCharacteristicInfoList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISoldierArchetypeDescription : public CasablancaShared::UIItemDescription {
        UIIncubatorShared::LocalizedStringId NameSid; // 0x28
        UIIncubatorShared::LocalizedStringId DescriptionSid; // 0x30
        CString ImagePath; // 0x38
        CasablancaShared::UISoldierArchetypeCharacteristicInfoList CharacteristicInfoList; // 0x40
        UIIncubatorShared::LocalizedStringId AvailableWeaponsSid; // 0x48
        UIIncubatorShared::LocalizedStringId AvailableGadgetsSid; // 0x50
        UIIncubatorShared::LocalizedStringId Perk1HeaderSid; // 0x58
        UIIncubatorShared::LocalizedStringId Perk1Sid; // 0x60
        UIIncubatorShared::LocalizedStringId Perk2HeaderSid; // 0x68
        UIIncubatorShared::LocalizedStringId Perk2Sid; // 0x70
        UIIncubatorShared::LocalizedStringId Perk3HeaderSid; // 0x78
        UIIncubatorShared::LocalizedStringId Perk3Sid; // 0x80
        CString Perk1ImagePath; // 0x88
        CString Perk2ImagePath; // 0x90
        CString Perk3ImagePath; // 0x98
        CString ClassIconTexturePath; // 0xA0
    }; // 0xA8
    static_assert(sizeof(UISoldierArchetypeDescription) == 0xA8);
}
#pragma pack(pop)