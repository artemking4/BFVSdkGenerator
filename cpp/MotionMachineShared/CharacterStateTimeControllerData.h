// Object: CharacterStateTimeControllerData
// ClassId: 1365
// RuntimeId: 35180
// TypeInfo: 0x0000000144EFB8B0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Global/Float32.h"
#include "../MotionMachineShared/FloatChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateTimeControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Float32 StaticTimeScale; // 0x38
        char pad_0x3C[0x4];
        MotionMachineShared::FloatChannelData DynamicTimeScale; // 0x40
    }; // 0x48
    static_assert(sizeof(CharacterStateTimeControllerData) == 0x48);
}
#pragma pack(pop)