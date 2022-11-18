// Object: BFUIInputSequenceListenerElementEntityData
// ClassId: 3677
// RuntimeId: 28843
// TypeInfo: 0x0000000144D9A310
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../CasablancaShared/InputSequenceData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIInputSequenceListenerElementEntityData : public CasablancaShared::BFUIElementEntityData {
        Array<CasablancaShared::InputSequenceData> SequenceData; // 0x130
        Boolean EnableKeyListener; // 0x138
        Boolean EnablePadButtonListener; // 0x139
        Boolean Enabled; // 0x13A
        char pad_0x13B[0x5];
    }; // 0x140
    static_assert(sizeof(BFUIInputSequenceListenerElementEntityData) == 0x140);
}
#pragma pack(pop)