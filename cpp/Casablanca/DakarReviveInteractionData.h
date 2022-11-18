// Object: DakarReviveInteractionData
// ClassId: 4190
// RuntimeId: 6689
// TypeInfo: 0x0000000144C7D980
#include "../Casablanca/SoldierInteractionData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DakarReviveInteractionData : public Casablanca::SoldierInteractionData {
        Float32 BuddyReviveStartThreshold; // 0x28
        Float32 BuddyReviveCompletionThreshold; // 0x2C
        Float32 SyringeReviveStartThreshold; // 0x30
        Float32 SyringeReviveCompletionThreshold; // 0x34
    }; // 0x38
    static_assert(sizeof(DakarReviveInteractionData) == 0x38);
}
#pragma pack(pop)