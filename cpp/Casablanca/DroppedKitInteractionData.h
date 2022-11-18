// Object: DroppedKitInteractionData
// ClassId: 4179
// RuntimeId: 36873
// TypeInfo: 0x0000000144C7E000
#include "../Casablanca/InteractionData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DroppedKitInteractionData : public Casablanca::InteractionData {
        Float32 InteractionDuration; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(DroppedKitInteractionData) == 0x30);
}
#pragma pack(pop)