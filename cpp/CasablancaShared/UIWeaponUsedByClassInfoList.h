// Object: UIWeaponUsedByClassInfoList
// ClassId: 5547
// RuntimeId: 20507
// TypeInfo: 0x0000000144D99A10
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIWeaponUsedByClassInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIWeaponUsedByClassInfoList : public Core::DataContainer {
        Array<CasablancaShared::UIWeaponUsedByClassInfo> UsedByClassInfo; // 0x18
    }; // 0x20
    static_assert(sizeof(UIWeaponUsedByClassInfoList) == 0x20);
}
#pragma pack(pop)