// Object: KeyInputSequence
// ClassId: 4170
// RuntimeId: 55266
// TypeInfo: 0x0000000144D9A490
#include "../CasablancaShared/InputSequence.h"
#include "../GameShared/InputDeviceKeys.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class KeyInputSequence : public CasablancaShared::InputSequence {
        Array<GameShared::InputDeviceKeys> Key; // 0x20
    }; // 0x28
    static_assert(sizeof(KeyInputSequence) == 0x28);
}
#pragma pack(pop)