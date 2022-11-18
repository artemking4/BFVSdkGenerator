// Object: WeaponEntityData
// ClassId: 3343
// RuntimeId: 21658
// TypeInfo: 0x0000000144F448B0
#include "../Entity/GameComponentEntityData.h"
#include "../SoldierShared/WeaponClassEnum.h"
#include "../SoldierShared/WeaponStateData.h"
#include "../WeaponShared/WeaponFiringData.h"
#include "../WeaponShared/WeaponData.h"
#include "../GameShared/GameAIWeaponData.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class WeaponEntityData : public Entity::GameComponentEntityData {
        SoldierShared::WeaponClassEnum WeaponClass; // 0x90
        char pad_0x94[0x4];
        Array<SoldierShared::WeaponStateData> WeaponStates; // 0x98
        WeaponShared::WeaponFiringData WeaponFiring; // 0xA0
        WeaponShared::WeaponData CustomWeaponType; // 0xA8
        GameShared::GameAIWeaponData AIData; // 0xB0
        char pad_0xB8[0x8];
    }; // 0xC0
    static_assert(sizeof(WeaponEntityData) == 0xC0);
}
#pragma pack(pop)