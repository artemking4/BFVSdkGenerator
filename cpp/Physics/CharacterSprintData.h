// Object: CharacterSprintData
// ClassId: 1317
// RuntimeId: 62910
// TypeInfo: 0x0000000144F10500
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Physics {
    class CharacterSprintData : public Core::DataContainer {
        Float32 SprintPowerDecreasePerSecond; // 0x18
        Float32 SprintPowerIncreasePerSecond; // 0x1C
        Float32 SprintMinimumPower; // 0x20
        Boolean AllowContinousSprinting; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(CharacterSprintData) == 0x28);
}
#pragma pack(pop)