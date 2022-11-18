// Object: CameraDirectorProxyKeyframe
// ClassId: 1284
// RuntimeId: 14623
// TypeInfo: 0x0000000144E9D950
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class CameraDirectorProxyKeyframe : public Core::DataContainer {
        Float32 Time; // 0x18
        Boolean JumpCut; // 0x1C
        char pad_0x1D[0x3];
    }; // 0x20
    static_assert(sizeof(CameraDirectorProxyKeyframe) == 0x20);
}
#pragma pack(pop)