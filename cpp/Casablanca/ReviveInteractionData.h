// Object: ReviveInteractionData
// ClassId: 4193
// RuntimeId: 3126
// TypeInfo: 0x0000000144C7DA80
#include "../Casablanca/SoldierInteractionData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class ReviveInteractionData : public Casablanca::SoldierInteractionData {
        Float32 BuddyReviveStartThreshold; // 0x28
        Float32 BuddyReviveCompletionThreshold; // 0x2C
        Float32 BuddyReviveAbortThreshold; // 0x30
        Float32 BuddyReviveMinDelayAbortThreshold; // 0x34
        Float32 SyringeReviveStartThreshold; // 0x38
        Float32 SyringeReviveCompletionThreshold; // 0x3C
        Float32 SyringeReviveAbortThreshold; // 0x40
        Float32 SyringeReviveMinDelayAbortThreshold; // 0x44
        Float32 OffsetRaycastY; // 0x48
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(ReviveInteractionData) == 0x50);
}
#pragma pack(pop)