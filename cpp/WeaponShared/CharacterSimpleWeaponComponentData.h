// Object: CharacterSimpleWeaponComponentData
// ClassId: 1743
// RuntimeId: 43247
// TypeInfo: 0x0000000144F79F60
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Core/LinearTransform.h"
#include "../WeaponShared/WeaponFiringData.h"

#pragma pack(push, 16)
namespace WeaponShared {
    class CharacterSimpleWeaponComponentData : public Entity::GameComponentData {
        Core::LinearTransform WeaponOffset; // 0x80
        Core::LinearTransform FireTarget; // 0xC0
        Core::Realm Realm; // 0x100
        char pad_0x104[0x4];
        CString DamageGiverName; // 0x108
        WeaponShared::WeaponFiringData WeaponFiring; // 0x110
        char pad_0x118[0x8];
    }; // 0x120
    static_assert(sizeof(CharacterSimpleWeaponComponentData) == 0x120);
}
#pragma pack(pop)