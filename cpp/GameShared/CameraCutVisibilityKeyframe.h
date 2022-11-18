// Object: CameraCutVisibilityKeyframe
// ClassId: 1282
// RuntimeId: 56327
// TypeInfo: 0x0000000144E9DA50
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace GameShared {
    class CameraCutVisibilityKeyframe : public Core::DataContainer {
        Float32 Time; // 0x18
        char pad_0x1C[0x4];
        Array<Guid> GuidChain; // 0x20
    }; // 0x28
    static_assert(sizeof(CameraCutVisibilityKeyframe) == 0x28);
}
#pragma pack(pop)