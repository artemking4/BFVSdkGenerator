// Object: PA2Bone
// ClassId: 4400
// RuntimeId: 9940
// TypeInfo: 0x0000000144E75EC0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace GameShared {
    class PA2Bone : public Core::DataContainer {
        Uint32 Bone; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(PA2Bone) == 0x20);
}
#pragma pack(pop)