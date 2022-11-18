// Object: SoldierWeaponSocketObjectData
// ClassId: 4634
// RuntimeId: 28791
// TypeInfo: 0x0000000144F39590
#include "../SoldierShared/SocketObjectDataBase.h"
#include "../Global/Guid.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierWeaponSocketObjectData : public SoldierShared::SocketObjectDataBase {
        Guid SoldierWeaponGuid; // 0x18
        char pad_0x28[0x8];
        Core::LinearTransform Transform; // 0x30
    }; // 0x70
    static_assert(sizeof(SoldierWeaponSocketObjectData) == 0x70);
}
#pragma pack(pop)