// Object: ChildRotationBodyData
// ClassId: 4325
// RuntimeId: 29981
// TypeInfo: 0x0000000144E82540
#include "../Physics/RotationBodyData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class ChildRotationBodyData : public Physics::RotationBodyData {
        Float32 ForceModifier; // 0x50
        Float32 ResetForceModifier; // 0x54
        Float32 ResetForceInputThreshold; // 0x58
        Int32 RotationInput; // 0x5C
        Float32 WorldSpaceLockEfficiency; // 0x60
        Boolean UseLinearInput; // 0x64
        char pad_0x65[0x3];
    }; // 0x68
    static_assert(sizeof(ChildRotationBodyData) == 0x68);
}
#pragma pack(pop)