// Object: CharacterStateRootControllerData
// ClassId: 1360
// RuntimeId: 57859
// TypeInfo: 0x0000000144EFAAB0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/ChannelTableData.h"
#include "../MotionMachineShared/ChannelDebugFilterData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateRootControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        MotionMachineShared::ChannelTableData Channels; // 0x38
        Array<MotionMachineShared::ChannelDebugFilterData> DebugFilters; // 0x2C8
        Ant::AntRef RootAntController; // 0x2D0
        Ant::AntRef PostPhysicsRootAntController; // 0x2E4
    }; // 0x2F8
    static_assert(sizeof(CharacterStateRootControllerData) == 0x2F8);
}
#pragma pack(pop)