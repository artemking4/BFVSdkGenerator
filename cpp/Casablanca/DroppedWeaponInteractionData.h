// Object: DroppedWeaponInteractionData
// ClassId: 4180
// RuntimeId: 6179
// TypeInfo: 0x0000000144C7DF80
#include "../Casablanca/InteractionData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DroppedWeaponInteractionData : public Casablanca::InteractionData {
        Float32 InteractionDuration; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(DroppedWeaponInteractionData) == 0x30);
}
#pragma pack(pop)