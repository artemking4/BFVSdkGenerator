// Object: DropWeaponComponentData
// ClassId: 1761
// RuntimeId: 9256
// TypeInfo: 0x0000000144C7E480
#include "../Entity/GameComponentData.h"
#include "../SoldierShared/PickupEntityAsset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Casablanca/RandomVelocityRange.h"
#include "../Global/Int32.h"
#include "../WeaponShared/WeaponSlot.h"

#pragma pack(push, 16)
namespace Casablanca {
    class DropWeaponComponentData : public Entity::GameComponentData {
        SoldierShared::PickupEntityAsset DeathPickup; // 0x80
        Float32 ForceMinimumVelocity; // 0x88
        Casablanca::RandomVelocityRange HitVelocity; // 0x8C
        Casablanca::RandomVelocityRange ForwardVelocity; // 0x94
        Casablanca::RandomVelocityRange UpVelocity; // 0x9C
        Float32 DropWeaponAfterTime; // 0xA4
        SoldierShared::PickupEntityAsset Pickup; // 0xA8
        Int32 ActionIdentifier; // 0xB0
        Float32 WeaponDropTime; // 0xB4
        Array<WeaponShared::WeaponSlot> ExcludedWeaponSlots; // 0xB8
        Boolean ListenToAnimationWeaponDropSignal; // 0xC0
        Boolean RequireWeaponSlotEmpty; // 0xC1
        Boolean AllowDropWeaponOnAction; // 0xC2
        char pad_0xC3[0xD];
    }; // 0xD0
    static_assert(sizeof(DropWeaponComponentData) == 0xD0);
}
#pragma pack(pop)