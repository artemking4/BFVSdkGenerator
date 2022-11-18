// Object: DisableSoldierWeaponsEntityData
// ClassId: 2644
// RuntimeId: 44097
// TypeInfo: 0x0000000144F39410
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class DisableSoldierWeaponsEntityData : public Entity::EntityData {
        GameShared::TeamId OnlyForTeam; // 0x20
        char pad_0x24[0x4];
        Array<Uint32> UnlockIdentifiers; // 0x28
        Boolean IsActive; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(DisableSoldierWeaponsEntityData) == 0x38);
}
#pragma pack(pop)