// Object: PadButtonInputSequence
// ClassId: 4171
// RuntimeId: 40881
// TypeInfo: 0x0000000144D9A390
#include "../CasablancaShared/InputSequence.h"
#include "../GameShared/InputDevicePadButtons.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PadButtonInputSequence : public CasablancaShared::InputSequence {
        Array<GameShared::InputDevicePadButtons> Button; // 0x20
    }; // 0x28
    static_assert(sizeof(PadButtonInputSequence) == 0x28);
}
#pragma pack(pop)