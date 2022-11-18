// Object: UIWeaponUsedByClassInfo
// ClassId: 5546
// RuntimeId: 23888
// TypeInfo: 0x0000000144D99A90
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIWeaponUsedByClassInfo : public Core::DataContainer {
        CString ImagePath; // 0x18
    }; // 0x20
    static_assert(sizeof(UIWeaponUsedByClassInfo) == 0x20);
}
#pragma pack(pop)