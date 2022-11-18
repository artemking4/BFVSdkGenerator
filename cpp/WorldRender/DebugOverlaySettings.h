// Object: DebugOverlaySettings
// ClassId: 1508
// RuntimeId: 19635
// TypeInfo: 0x0000000144EB9410
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace WorldRender {
    class DebugOverlaySettings : public Core::DataContainer {
        Float32 MouseX; // 0x18
        Float32 MouseY; // 0x1C
        Boolean DebugInfoEnable; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(DebugOverlaySettings) == 0x28);
}
#pragma pack(pop)