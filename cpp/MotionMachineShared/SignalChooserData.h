// Object: SignalChooserData
// ClassId: 4623
// RuntimeId: 55350
// TypeInfo: 0x0000000144EF46A0
#include "../Core/DataContainer.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class SignalChooserData : public Core::DataContainer {
        Array<MotionMachineShared::BoolChannelData> CompareChannels; // 0x18
        Array<Uint32> SubjectMatches; // 0x20
        Array<Uint32> SubjectMasks; // 0x28
    }; // 0x30
    static_assert(sizeof(SignalChooserData) == 0x30);
}
#pragma pack(pop)