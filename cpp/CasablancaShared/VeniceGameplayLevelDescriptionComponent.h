// Object: VeniceGameplayLevelDescriptionComponent
// ClassId: 4224
// RuntimeId: 49099
// TypeInfo: 0x0000000144D2A5A0
#include "../GameShared/LevelDescriptionComponent.h"
#include "../Global/Boolean.h"
#include "../Global/Guid.h"
#include "../CasablancaShared/BFFactionId.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VeniceGameplayLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        Guid VehicleObjectVariationUnlockGuid; // 0x18
        CasablancaShared::BFFactionId AllTeamsFaction; // 0x28
        CasablancaShared::BFFactionId DefaultTeam1Faction; // 0x2C
        CasablancaShared::BFFactionId DefaultTeam2Faction; // 0x30
        CasablancaShared::BFFactionId DefaultTeam3Faction; // 0x34
        CasablancaShared::BFFactionId DefaultTeam4Faction; // 0x38
        CasablancaShared::BFFactionId DefaultTeam5Faction; // 0x3C
        CasablancaShared::BFFactionId DefaultTeam6Faction; // 0x40
        Uint32 EpisodeIndex; // 0x44
        Boolean AllowParachuteFromMobileSpawnpoint; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(VeniceGameplayLevelDescriptionComponent) == 0x50);
}
#pragma pack(pop)