// Object: AISyringeGadget
// ClassId: 359
// RuntimeId: 33467
// TypeInfo: 0x0000000144C19B30
#include "../BattleAIShared/GadgetBase.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AISyringeGadget : public BattleAIShared::GadgetBase {
        Float32 MaxDistance; // 0x40
        Float32 MaxDownedTime; // 0x44
        Float32 RevivePathMinDistFromThreat; // 0x48
        Int32 MaxRevivedCount; // 0x4C
    }; // 0x50
    static_assert(sizeof(AISyringeGadget) == 0x50);
}
#pragma pack(pop)