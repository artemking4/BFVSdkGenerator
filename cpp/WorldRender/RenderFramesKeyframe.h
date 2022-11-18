// Object: RenderFramesKeyframe
// ClassId: 4565
// RuntimeId: 35216
// TypeInfo: 0x0000000144EB9510
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace WorldRender {
    class RenderFramesKeyframe : public Core::DataContainer {
        Float32 Time; // 0x18
        Float32 Length; // 0x1C
        CString RenderFileName; // 0x20
        CString RenderFolderName; // 0x28
    }; // 0x30
    static_assert(sizeof(RenderFramesKeyframe) == 0x30);
}
#pragma pack(pop)