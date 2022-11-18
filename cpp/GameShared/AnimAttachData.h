// Object: AnimAttachData
// ClassId: 104
// RuntimeId: 45925
// TypeInfo: 0x0000000144E82140
#include "../Core/DataContainer.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace GameShared {
    class AnimAttachData : public Core::DataContainer {
        Int32 JointNameHash; // 0x18
        Int32 JointIndex; // 0x1C
        Core::LinearTransform Offset; // 0x20
        Boolean UseRotation; // 0x60
        char pad_0x61[0xF];
    }; // 0x70
    static_assert(sizeof(AnimAttachData) == 0x70);
}
#pragma pack(pop)