// Object: UINPXTextLine
// ClassId: 5450
// RuntimeId: 40579
// TypeInfo: 0x0000000144C7F400
#include "../Casablanca/UINPXLine.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UINPXTextLine : public Casablanca::UINPXLine {
        CString Text; // 0x50
    }; // 0x58
    static_assert(sizeof(UINPXTextLine) == 0x58);
}
#pragma pack(pop)