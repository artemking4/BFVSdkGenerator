// Object: SoldierWeaponSwitchingData
// ClassId: 739
// RuntimeId: 54906
// TypeInfo: 0x0000000144F42930
#include "../Core/Asset.h"
#include "../SoldierShared/WeaponSwitchingMapData.h"
#include "../SoldierShared/DirectWeaponSwitchingMapData.h"
#include "../SoldierShared/WeaponSwitchingEnum.h"
#include "../SoldierShared/WeaponSlotClone.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierWeaponSwitchingData : public Core::Asset {
        Array<SoldierShared::WeaponSwitchingMapData> SwitchMap; // 0x20
        Array<SoldierShared::DirectWeaponSwitchingMapData> DirectSwitchMap; // 0x28
        Array<SoldierShared::WeaponSwitchingEnum> AutoDropSlots; // 0x30
        Array<SoldierShared::WeaponSwitchingEnum> ValidMouseWheelSlots; // 0x38
        Array<SoldierShared::WeaponSlotClone> SlotClones; // 0x40
        Int32 ToggleAction; // 0x48
        char pad_0x4C[0x4];
        Array<SoldierShared::WeaponSwitchingEnum> CycleSecondaryItems; // 0x50
        Int32 ToggleSecondaryAction; // 0x58
        Float32 ToggleMaxHoldTime; // 0x5C
        Boolean AlwaysUseMaxHoldTimes; // 0x60
        char pad_0x61[0x7];
    }; // 0x68
    static_assert(sizeof(SoldierWeaponSwitchingData) == 0x68);
}
#pragma pack(pop)