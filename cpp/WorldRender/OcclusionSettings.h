// Object: OcclusionSettings
// ClassId: 4381
// RuntimeId: 31525
// TypeInfo: 0x0000000144EB9610
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace WorldRender {
    class OcclusionSettings : public Core::DataContainer {
        Float32 GlobalCullScreenArea; // 0x18
        Boolean Enable; // 0x1C
        Boolean DrawZbuffer; // 0x1D
        Boolean DrawSplitView; // 0x1E
        Boolean DrawBinaryBuffer; // 0x1F
    }; // 0x20
    static_assert(sizeof(OcclusionSettings) == 0x20);
}
#pragma pack(pop)