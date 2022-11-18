// Object: AntMemorySettings
// ClassId: 126
// RuntimeId: 26841
// TypeInfo: 0x0000000144DFB660
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Ant {
    class AntMemorySettings : public Core::DataContainer {
        Int32 RTPoolLayersControllers; // 0x18
        Int32 RTPoolStateflowControllers; // 0x1C
        Int32 RTPoolStateflowNodeControllers; // 0x20
        Int32 RTPoolTransitionControllers; // 0x24
        Int32 RTPoolClipControllers; // 0x28
        Int32 RTPoolChooserControllers; // 0x2C
        Int32 RTPoolLoopingControllers; // 0x30
        Int32 RTPoolTransparentControllers; // 0x34
    }; // 0x38
    static_assert(sizeof(AntMemorySettings) == 0x38);
}
#pragma pack(pop)