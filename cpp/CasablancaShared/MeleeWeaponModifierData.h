// Object: MeleeWeaponModifierData
// ClassId: 4279
// RuntimeId: 2509
// TypeInfo: 0x0000000144D3FC50
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/MeleeModifierDirectionData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MeleeWeaponModifierData : public Core::DataContainer {
        CasablancaShared::MeleeModifierDirectionData Standing; // 0x18
        CasablancaShared::MeleeModifierDirectionData Prone; // 0x38
        Boolean UseDamageVictimOverTime; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(MeleeWeaponModifierData) == 0x60);
}
#pragma pack(pop)