// Object: ChildMovingBodyData
// ClassId: 4323
// RuntimeId: 37714
// TypeInfo: 0x0000000144E824C0
#include "../Physics/LinearMovingBodyData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class ChildMovingBodyData : public Physics::LinearMovingBodyData {
        Float32 InputDelay; // 0x60
        Float32 Speed; // 0x64
        Int32 InputAction; // 0x68
        Float32 TriggerImpulse; // 0x6C
        Boolean IsOneShotInput; // 0x70
        char pad_0x71[0xF];
    }; // 0x80
    static_assert(sizeof(ChildMovingBodyData) == 0x80);
}
#pragma pack(pop)