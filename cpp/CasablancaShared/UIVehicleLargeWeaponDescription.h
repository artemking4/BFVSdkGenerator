// Object: UIVehicleLargeWeaponDescription
// ClassId: 5424
// RuntimeId: 52626
// TypeInfo: 0x0000000144D99390
#include "../CasablancaShared/UIGenericUnlockMetaData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIVehicleLargeWeaponDescription : public CasablancaShared::UIGenericUnlockMetaData {
        CString Category; // 0x58
        Boolean ShowFireRate; // 0x60
        char pad_0x61[0x7];
    }; // 0x68
    static_assert(sizeof(UIVehicleLargeWeaponDescription) == 0x68);
}
#pragma pack(pop)