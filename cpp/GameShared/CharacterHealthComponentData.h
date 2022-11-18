// Object: CharacterHealthComponentData
// ClassId: 1930
// RuntimeId: 22178
// TypeInfo: 0x0000000144E830C0
#include "../GameplaySim/ControllableHealthComponentData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class CharacterHealthComponentData : public GameplaySim::ControllableHealthComponentData {
        Float32 MaxHealth; // 0x80
        char pad_0x84[0xC];
    }; // 0x90
    static_assert(sizeof(CharacterHealthComponentData) == 0x90);
}
#pragma pack(pop)