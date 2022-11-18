// Object: BuddyReviveInteractionData
// ClassId: 4189
// RuntimeId: 11515
// TypeInfo: 0x0000000144C7D900
#include "../Casablanca/SoldierInteractionData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BuddyReviveInteractionData : public Casablanca::SoldierInteractionData {
        Float32 StartThreshold; // 0x28
        Float32 CompletionThreshold; // 0x2C
    }; // 0x30
    static_assert(sizeof(BuddyReviveInteractionData) == 0x30);
}
#pragma pack(pop)