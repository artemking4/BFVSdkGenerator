// Object: CharacterStateIndexChooserControllerData
// ClassId: 1344
// RuntimeId: 41246
// TypeInfo: 0x0000000144EF4520
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/IntChannelData.h"
#include "../MotionMachineShared/SignalChooserData.h"
#include "../MotionMachineShared/RandomChooserData.h"
#include "../MotionMachineShared/FloatChooserData.h"
#include "../MotionMachineShared/ContextDatabaseChooserData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateIndexChooserControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        MotionMachineShared::IntChannelData IndexChannel; // 0x38
        MotionMachineShared::SignalChooserData SignalChooser; // 0x40
        MotionMachineShared::RandomChooserData RandomChooser; // 0x48
        MotionMachineShared::FloatChooserData FloatChooser; // 0x50
        MotionMachineShared::ContextDatabaseChooserData ContextDataBaseChooser; // 0x58
    }; // 0x60
    static_assert(sizeof(CharacterStateIndexChooserControllerData) == 0x60);
}
#pragma pack(pop)