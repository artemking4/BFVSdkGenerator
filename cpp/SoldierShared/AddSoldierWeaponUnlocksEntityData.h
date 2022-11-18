// Object: AddSoldierWeaponUnlocksEntityData
// ClassId: 2026
// RuntimeId: 54798
// TypeInfo: 0x0000000144F458B0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class AddSoldierWeaponUnlocksEntityData : public Entity::EntityData {
        GameShared::TeamId OnlyForTeam; // 0x20
        char pad_0x24[0x4];
        Array<GameShared::UnlockAssetBase> Unlocks; // 0x28
        Boolean Enabled; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(AddSoldierWeaponUnlocksEntityData) == 0x38);
}
#pragma pack(pop)