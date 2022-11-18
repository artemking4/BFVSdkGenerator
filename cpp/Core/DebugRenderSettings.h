// Object: DebugRenderSettings
// ClassId: 1509
// RuntimeId: 47719
// TypeInfo: 0x0000000144BE35E0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Core {
    class DebugRenderSettings : public Core::DataContainer {
        Float32 TextViewDistance; // 0x18
        Uint32 TextQueueMaxLineCount; // 0x1C
        Float32 TextQueueTimeVisible; // 0x20
        Int32 ProcessJobCount; // 0x24
        Uint32 Ps3SpuFrameBufferSize; // 0x28
        Uint32 DxMaxVertexCount; // 0x2C
        Boolean Enable; // 0x30
        Boolean DrawStatsEnable; // 0x31
        Boolean TextQueueLocationTop; // 0x32
        Boolean Ps3SpuEnable; // 0x33
        Boolean DxLine2dAntialiasingEnable; // 0x34
        Boolean DxLine3dAntialiasingEnable; // 0x35
        char pad_0x36[0x2];
    }; // 0x38
    static_assert(sizeof(DebugRenderSettings) == 0x38);
}
#pragma pack(pop)