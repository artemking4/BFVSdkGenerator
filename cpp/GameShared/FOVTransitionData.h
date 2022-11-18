// Object: FOVTransitionData
// ClassId: 1616
// RuntimeId: 32655
// TypeInfo: 0x0000000144E83740
#include "../Core/DataContainer.h"
#include "../GameShared/FOVTransitionType.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class FOVTransitionData : public Core::DataContainer {
        GameShared::FOVTransitionType TransitionType; // 0x18
        Float32 Shape; // 0x1C
        Float32 StartDelay; // 0x20
        Float32 StartJump; // 0x24
        Float32 EndEarly; // 0x28
        Boolean Invert; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(FOVTransitionData) == 0x30);
}
#pragma pack(pop)