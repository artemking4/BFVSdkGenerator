// Object: InteractionData
// ClassId: 4175
// RuntimeId: 22054
// TypeInfo: 0x0000000144C7E380
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

namespace Casablanca {
    class InteractionData : public Core::DataContainer {
        Float32 DistanceToInteract; // 0x18
        Float32 MaxLookAtAngle; // 0x1C
        Int32 InteractInputAction; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(InteractionData) == 0x28);
}