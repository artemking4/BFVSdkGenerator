// Object: ChargeEntityData
// ClassId: 2470
// RuntimeId: 51597
// TypeInfo: 0x0000000144D030A0
#include "../CasablancaShared/ChargeEntityBaseData.h"
#include "../CasablancaShared/ChargeBinding.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ChargeEntityData : public CasablancaShared::ChargeEntityBaseData {
        CasablancaShared::ChargeBinding ChargeGameStateBinding; // 0x58
        Float32 FallbackRange; // 0x94
        Float32 FallbackDamage; // 0x98
        Float32 HeightDifference; // 0x9C
        Float32 SuccessStateTime; // 0xA0
        Boolean ForceToStandOnCharge; // 0xA4
        char pad_0xA5[0x3];
    }; // 0xA8
    static_assert(sizeof(ChargeEntityData) == 0xA8);
}
#pragma pack(pop)