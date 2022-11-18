// Object: SquadReinforcementWeaponData
// ClassId: 5227
// RuntimeId: 11479
// TypeInfo: 0x0000000144D40850
#include "../CasablancaShared/StrikeDesignatorWeaponData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadReinforcementWeaponData : public CasablancaShared::StrikeDesignatorWeaponData {
        Float32 RadioIdleTimeout; // 0x38
        Float32 BinocularsIdleTimeout; // 0x3C
        Boolean SwitchBackToPrimaryOnIdleTimeout; // 0x40
        Boolean BinocularsEnableLocking; // 0x41
        Boolean BinocularsOnlyFireWhenLockedOn; // 0x42
        Boolean TriggerFireOnSecondaryFire; // 0x43
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(SquadReinforcementWeaponData) == 0x48);
}
#pragma pack(pop)