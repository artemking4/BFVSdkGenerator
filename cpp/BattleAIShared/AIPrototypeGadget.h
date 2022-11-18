// Object: AIPrototypeGadget
// ClassId: 357
// RuntimeId: 42846
// TypeInfo: 0x0000000144C18030
#include "../BattleAIShared/GadgetBase.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIPrototypeGadget : public BattleAIShared::GadgetBase {
        Float32 PauseDuration; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(AIPrototypeGadget) == 0x48);
}
#pragma pack(pop)