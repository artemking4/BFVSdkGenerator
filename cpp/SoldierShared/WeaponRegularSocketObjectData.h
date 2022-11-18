// Object: WeaponRegularSocketObjectData
// ClassId: 4636
// RuntimeId: 13939
// TypeInfo: 0x0000000144F42CB0
#include "../SoldierShared/WeaponSocketObjectData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class WeaponRegularSocketObjectData : public SoldierShared::WeaponSocketObjectData {
        Array<Core::LinearTransform> Mesh3pTransforms; // 0x38
        Core::LinearTransform Transform; // 0x40
    }; // 0x80
    static_assert(sizeof(WeaponRegularSocketObjectData) == 0x80);
}
#pragma pack(pop)