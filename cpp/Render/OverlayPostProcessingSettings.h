// Object: OverlayPostProcessingSettings
// ClassId: 4399
// RuntimeId: 13591
// TypeInfo: 0x0000000144F1D500
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace Render {
    class OverlayPostProcessingSettings : public Core::DataContainer {
        Int32 DownscaledDispatchSize; // 0x18
        Int32 DispatchSize; // 0x1C
        Core::Vec4 Param1; // 0x20
        Core::Vec4 Param2; // 0x30
        Core::Vec4 Param3; // 0x40
        Core::Vec4 Param4; // 0x50
        Float32 ParamTolerance; // 0x60
        Boolean Enabled; // 0x64
        char pad_0x65[0xB];
    }; // 0x70
    static_assert(sizeof(OverlayPostProcessingSettings) == 0x70);
}
#pragma pack(pop)