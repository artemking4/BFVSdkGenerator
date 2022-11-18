// Object: TextInputSequence
// ClassId: 4172
// RuntimeId: 32609
// TypeInfo: 0x0000000144D9A410
#include "../CasablancaShared/InputSequence.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class TextInputSequence : public CasablancaShared::InputSequence {
        CString Text; // 0x20
    }; // 0x28
    static_assert(sizeof(TextInputSequence) == 0x28);
}
#pragma pack(pop)