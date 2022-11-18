// Object: GunMasterGameModeEntityData
// ClassId: 2792
// RuntimeId: 40745
// TypeInfo: 0x0000000144D65EF0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/GunMasterRanksAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GunMasterGameModeEntityData : public Entity::EntityData {
        CasablancaShared::GunMasterRanksAsset Ranks; // 0x20
        Boolean DemoteVictimOnMeleeTakedown; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(GunMasterGameModeEntityData) == 0x30);
}
#pragma pack(pop)