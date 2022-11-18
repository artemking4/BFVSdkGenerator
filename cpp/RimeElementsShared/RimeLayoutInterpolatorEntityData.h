// Object: RimeLayoutInterpolatorEntityData
// ClassId: 3124
// RuntimeId: 8732
// TypeInfo: 0x0000000144F2B890
#include "../RimeElementsShared/RimePropertyInterpolatorEntityData.h"
#include "../RimeElementsShared/RimeAxisLayoutData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

namespace RimeElementsShared {
    class RimeLayoutInterpolatorEntityData : public RimeElementsShared::RimePropertyInterpolatorEntityData {
        RimeElementsShared::RimeAxisLayoutData In; // 0x38
        RimeElementsShared::RimeAxisLayoutData DefaultValue; // 0x50
        Float32 Velocity; // 0x68
        Boolean UseVelocity; // 0x6C
        char pad_0x6D[0x3];
    }; // 0x70
    static_assert(sizeof(RimeLayoutInterpolatorEntityData) == 0x70);
}