// Object: SamplerNodeDebugData
// ClassId: 4580
// RuntimeId: 40790
// TypeInfo: 0x0000000144E026F0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Audio {
    class SamplerNodeDebugData : public Core::DataContainer {
        Int32 DebugTextXPos; // 0x18
        char pad_0x1C[0x4];
        Core::Vec3 SamplerDebugInfoColor; // 0x20
        Core::Vec3 PropertiesDebugInfoColor; // 0x30
        Core::Vec3 EventsDebugInfoColor; // 0x40
        Core::Vec3 ExternalWaveDebugInfoColor; // 0x50
        Core::Vec3 SelectionDebugInfoColor; // 0x60
        Int32 DebugTextYPos; // 0x70
        Float32 EventDisplayTime; // 0x74
        Boolean OnlyDebugIfPlaying; // 0x78
        Boolean EnableDebug; // 0x79
        Boolean DebugInputConnections; // 0x7A
        Boolean DebugOutputConnections; // 0x7B
        Boolean MuteSampler; // 0x7C
        char pad_0x7D[0x3];
    }; // 0x80
    static_assert(sizeof(SamplerNodeDebugData) == 0x80);
}
#pragma pack(pop)