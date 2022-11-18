// Object: ShieldHealthComponentData
// ClassId: 1940
// RuntimeId: 26812
// TypeInfo: 0x0000000144DF0F50
#include "../GameplaySim/GameHealthComponentData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class ShieldHealthComponentData : public GameplaySim::GameHealthComponentData {
        Float32 MaxHealth; // 0x80
        Float32 SelfDamageModifier; // 0x84
        Float32 FriendyFireDamageModifier; // 0x88
        char pad_0x8C[0x4];
    }; // 0x90
    static_assert(sizeof(ShieldHealthComponentData) == 0x90);
}
#pragma pack(pop)