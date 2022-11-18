// Object: MusicPlayableData
// ClassId: 4337
// RuntimeId: 62254
// TypeInfo: 0x0000000144E1D940
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicPlayableData : public Core::DataContainer {
        CString Name; // 0x18
        Uint32 PlayCount; // 0x20
        Float32 MinDelay; // 0x24
        Float32 MaxDelay; // 0x28
        Float32 TransitionTime; // 0x2C
        Uint32 BeatsPerMinute; // 0x30
        Uint32 BeatsPerBar; // 0x34
        Float32 Gain; // 0x38
        Float32 Pitch; // 0x3C
    }; // 0x40
    static_assert(sizeof(MusicPlayableData) == 0x40);
}
#pragma pack(pop)