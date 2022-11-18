// Object: ExtendedConstraintsData
// ClassId: 1612
// RuntimeId: 50231
// TypeInfo: 0x0000000144F0E0C0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Physics {
    class ExtendedConstraintsData : public Core::DataContainer {
        Float32 Heading; // 0x18
        Float32 Width; // 0x1C
        Float32 Falloff; // 0x20
        Float32 AngularConstraintMin; // 0x24
        Float32 AngularConstraintMax; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ExtendedConstraintsData) == 0x30);
}
#pragma pack(pop)