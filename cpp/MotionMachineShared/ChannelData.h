// Object: ChannelData
// ClassId: 1305
// RuntimeId: 51633
// TypeInfo: 0x0000000144EFB7B0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class ChannelData : public Core::DataContainer {
        Int32 ChannelAssetIndex; // 0x18
        char pad_0x1C[0x4];
        CString Name; // 0x20
        Int32 TableIndex; // 0x28
        Boolean ResetWithControllerTreeReset; // 0x2C
        Boolean ResetEveryFrame; // 0x2D
        Boolean MirrorToAnt; // 0x2E
        Boolean Replicate; // 0x2F
        Boolean Networked; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(ChannelData) == 0x38);
}
#pragma pack(pop)