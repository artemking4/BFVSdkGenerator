// Object: UIWeaponDescription
// ClassId: 5427
// RuntimeId: 35628
// TypeInfo: 0x0000000144D99990
#include "../CasablancaShared/UIGenericUnlockMetaData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../CasablancaShared/UIWeaponUsedByClassInfoList.h"
#include "../Core/LinearTransform.h"
#include "../Global/Guid.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIWeaponDescription : public CasablancaShared::UIGenericUnlockMetaData {
        Int32 MagazineCapacity; // 0x58
        Int32 NumberOfMagazines; // 0x5C
        Core::LinearTransform DisplayTransform; // 0x60
        Core::LinearTransform InspectionTransform; // 0xA0
        Int32 AddCloneWeaponToSlot; // 0xE0
        char pad_0xE4[0x4];
        CString WeaponSwitchImagePath; // 0xE8
        CString WeaponCloneSwitchImagePath; // 0xF0
        CasablancaShared::UIWeaponUsedByClassInfoList UsedByClassInfoList; // 0xF8
        Guid WeaponClassGuid; // 0x100
        Boolean FireModeSingle; // 0x110
        Boolean FireModeBurst; // 0x111
        Boolean FireModeAuto; // 0x112
        Boolean IsMelee; // 0x113
        Boolean OverheatVisible; // 0x114
        Boolean ReloadVisible; // 0x115
        Boolean ReplenishVisible; // 0x116
        char pad_0x117[0x9];
    }; // 0x120
    static_assert(sizeof(UIWeaponDescription) == 0x120);
}
#pragma pack(pop)