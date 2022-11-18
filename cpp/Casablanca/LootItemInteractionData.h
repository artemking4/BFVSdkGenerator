// Object: LootItemInteractionData
// ClassId: 4186
// RuntimeId: 54729
// TypeInfo: 0x0000000144C7E180
#include "../Casablanca/InteractionData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class LootItemInteractionData : public Casablanca::InteractionData {
        Float32 InteractionDuration; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(LootItemInteractionData) == 0x30);
}
#pragma pack(pop)