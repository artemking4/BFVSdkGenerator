// Object: AntiRollBar
// ClassId: 129
// RuntimeId: 65426
// TypeInfo: 0x0000000144E9B910
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class AntiRollBar : public Core::DataContainer {
        Float32 Stiffness; // 0x18
        Float32 TorqueActivationLimit; // 0x1C
    }; // 0x20
    static_assert(sizeof(AntiRollBar) == 0x20);
}
#pragma pack(pop)