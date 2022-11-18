// Object: WeaponSocketObjectData
// ClassId: 4635
// RuntimeId: 63800
// TypeInfo: 0x0000000144F42D30
#include "../SoldierShared/SocketObjectDataBase.h"
#include "../Core/Asset.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponSocketObjectData : public SoldierShared::SocketObjectDataBase {
        Core::Asset Used1p; // 0x18
        Core::Asset Used1pZoom; // 0x20
        Core::Asset Used3p; // 0x28
        Core::Asset Used3pZoom; // 0x30
    }; // 0x38
    static_assert(sizeof(WeaponSocketObjectData) == 0x38);
}
#pragma pack(pop)