// Object: AIChargeTactic
// ClassId: 417
// RuntimeId: 29416
// TypeInfo: 0x0000000144C12B80
#include "../BattleAIShared/CoverTactic.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIChargeTactic : public BattleAIShared::CoverTactic {
        Float32 AllowedToChargeDistance; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(AIChargeTactic) == 0x40);
}
#pragma pack(pop)