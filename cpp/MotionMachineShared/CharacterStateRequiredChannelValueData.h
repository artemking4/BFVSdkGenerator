// Object: CharacterStateRequiredChannelValueData
// ClassId: 1403
// RuntimeId: 16327
// TypeInfo: 0x0000000144EFADB0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateRequiredChannelValueData : public Core::DataContainer {
        Boolean InvertConditions; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(CharacterStateRequiredChannelValueData) == 0x20);
}
#pragma pack(pop)