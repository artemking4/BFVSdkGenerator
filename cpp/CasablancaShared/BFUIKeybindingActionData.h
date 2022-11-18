// Object: BFUIKeybindingActionData
// ClassId: 1214
// RuntimeId: 19596
// TypeInfo: 0x0000000144D87AA0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../GameShared/InputActionData.h"
#include "../CasablancaShared/BFUIKeybindingSID.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIKeybindingActionData : public Core::DataContainer {
        Array<GameShared::InputActionData> Action; // 0x18
        Array<CasablancaShared::BFUIKeybindingSID> ActionSid; // 0x20
        Boolean HasAction; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUIKeybindingActionData) == 0x30);
}
#pragma pack(pop)