// Object: DivisibleLoopPlayerNodeDebugData
// ClassId: 1524
// RuntimeId: 54834
// TypeInfo: 0x0000000144E03C70
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Audio {
    class DivisibleLoopPlayerNodeDebugData : public Core::DataContainer {
        Int32 DebugTextXPos; // 0x18
        Int32 DebugTextYPos; // 0x1C
        Core::Vec3 DivisibleLoopPlayerDebugInfoColor; // 0x20
        Core::Vec3 PropertiesDebugInfoColor; // 0x30
        Core::Vec3 EventsDebugInfoColor; // 0x40
        Core::Vec3 ExternalWaveDebugInfoColor; // 0x50
        Float32 EventDisplayTime; // 0x60
        Boolean EnableDebug; // 0x64
        Boolean DebugInputConnections; // 0x65
        Boolean MuteSampler; // 0x66
        char pad_0x67[0x9];
    }; // 0x70
    static_assert(sizeof(DivisibleLoopPlayerNodeDebugData) == 0x70);
}
#pragma pack(pop)