// Object: ZoneStreamerSettings
// ClassId: 5724
// RuntimeId: 35477
// TypeInfo: 0x0000000144F7E2F0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace ZoneStreamer {
    class ZoneStreamerSettings : public Core::DataContainer {
        Float32 MinTimeBeforeReload; // 0x18
        Float32 Draw3dNameScale; // 0x1C
        Float32 Draw2dScale; // 0x20
        Float32 Draw2dPointSize; // 0x24
        Float32 Draw2dBgAlpha; // 0x28
        char pad_0x2C[0x4];
        CString SelectedStreamer; // 0x30
        Boolean TestZoneHeights; // 0x38
        Boolean PinVisitedZones; // 0x39
        Boolean PauseAll; // 0x3A
        Boolean DrawStats; // 0x3B
        Boolean Draw3dDebug; // 0x3C
        Boolean Draw2dDebug; // 0x3D
        Boolean Draw2dZones; // 0x3E
        Boolean Draw2dRotate; // 0x3F
        Boolean Draw2dZoneStates; // 0x40
        Boolean Draw2dCentroids; // 0x41
        Boolean Draw2dNames; // 0x42
        char pad_0x43[0x5];
    }; // 0x48
    static_assert(sizeof(ZoneStreamerSettings) == 0x48);
}
#pragma pack(pop)