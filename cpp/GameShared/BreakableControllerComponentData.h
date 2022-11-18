// Object: BreakableControllerComponentData
// ClassId: 1753
// RuntimeId: 39149
// TypeInfo: 0x0000000144E66A40
#include "../Physics/DestructionControllerComponentData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace GameShared {
    class BreakableControllerComponentData : public Physics::DestructionControllerComponentData {
        Uint32 BreakablePartCount; // 0xA0
        Uint32 NetworkIdCount; // 0xA4
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(BreakableControllerComponentData) == 0xB0);
}
#pragma pack(pop)