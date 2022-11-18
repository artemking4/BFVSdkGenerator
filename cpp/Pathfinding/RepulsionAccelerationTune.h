// Object: RepulsionAccelerationTune
// ClassId: 703
// RuntimeId: 21132
// TypeInfo: 0x0000000144EAAA70
#include "../Core/Asset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class RepulsionAccelerationTune : public Core::Asset {
        Float32 initialAcc; // 0x20
        Float32 outerCushionAcc; // 0x24
        Float32 innerCushionAcc; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(RepulsionAccelerationTune) == 0x30);
}
#pragma pack(pop)