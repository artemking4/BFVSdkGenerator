// Object: StepLogicSamplerNodeDebugData
// ClassId: 4922
// RuntimeId: 37444
// TypeInfo: 0x0000000144DB6C90
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class StepLogicSamplerNodeDebugData : public Core::DataContainer {
        Int32 DebugTextXPos; // 0x18
        Int32 DebugTextYPos; // 0x1C
        Core::Vec3 SamplerDebugInfoColor; // 0x20
        Core::Vec3 PropertiesDebugInfoColor; // 0x30
        Core::Vec3 EventsDebugInfoColor; // 0x40
        Core::Vec3 ExternalWaveDebugInfoColor; // 0x50
        Float32 EventDisplayTime; // 0x60
        Boolean EnableDebug; // 0x64
        Boolean MuteSampler; // 0x65
        char pad_0x66[0xA];
    }; // 0x70
    static_assert(sizeof(StepLogicSamplerNodeDebugData) == 0x70);
}
#pragma pack(pop)