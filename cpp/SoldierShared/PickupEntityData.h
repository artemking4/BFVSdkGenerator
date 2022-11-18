// Object: PickupEntityData
// ClassId: 3306
// RuntimeId: 38441
// TypeInfo: 0x0000000144F45830
#include "../Physics/GamePhysicsEntityData.h"
#include "../Global/Boolean.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Render/MeshAsset.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../SoldierShared/PickupPlayerEnum.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class PickupEntityData : public Physics::GamePhysicsEntityData {
        Entity::ObjectBlueprint PhysicsBlueprint; // 0xA0
        Render::MeshAsset Mesh; // 0xA8
        Uint32 PreferredWeaponSlot; // 0xB0
        Float32 TimeToLive; // 0xB4
        Float32 TimeToLiveWhenOutOfAmmo; // 0xB8
        char pad_0xBC[0x4];
        CString IconName; // 0xC0
        Int32 MinRandomSpareAmmoPercent; // 0xC8
        Int32 MaxRandomSpareAmmoPercent; // 0xCC
        Int32 MinRandomClipAmmoPercent; // 0xD0
        Int32 MaxRandomClipAmmoPercent; // 0xD4
        SoldierShared::PickupPlayerEnum RandomizeAmmoOnDropForPlayer; // 0xD8
        Float32 InteractionRadius; // 0xDC
        Float32 DisplayWithinRadius; // 0xE0
        Float32 TacticalRadius; // 0xE4
        Boolean IsGhost; // 0xE8
        Boolean UseWeaponMesh; // 0xE9
        Boolean UseWeaponPickupSettings; // 0xEA
        Boolean UnspawnOnPickup; // 0xEB
        Boolean UnspawnOnAmmoPickup; // 0xEC
        Boolean ContentIsStatic; // 0xED
        Boolean PositionIsStatic; // 0xEE
        Boolean AllowPickup; // 0xEF
        Boolean AllowPickupWhenOutOfAmmo; // 0xF0
        Boolean AllowPickupDuplicateGadget; // 0xF1
        Boolean IgnoreNullWeaponSlots; // 0xF2
        Boolean ForceWeaponSlotSelection; // 0xF3
        Boolean SetAsActiveWeaponSlot; // 0xF4
        Boolean DisplayInMiniMap; // 0xF5
        Boolean HasAutomaticAmmoPickup; // 0xF6
        Boolean TryPickupAmmoOnPickup; // 0xF7
        Boolean ReplaceAllContent; // 0xF8
        Boolean DropWeaponSlotsOnPickup; // 0xF9
        Boolean RemoveWeaponOnDrop; // 0xFA
        Boolean UseDisplayWithinRadius; // 0xFB
        Boolean KeepAmmoState; // 0xFC
        char pad_0xFD[0x3];
    }; // 0x100
    static_assert(sizeof(PickupEntityData) == 0x100);
}
#pragma pack(pop)