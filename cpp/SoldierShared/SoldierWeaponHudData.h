// Object: SoldierWeaponHudData
// ClassId: 4102
// RuntimeId: 59644
// TypeInfo: 0x0000000144F429B0
#include "../GameShared/HudData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierWeaponHudData : public GameShared::HudData {
        Float32 ReloadPrompt; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(SoldierWeaponHudData) == 0x20);
}
#pragma pack(pop)