// Object: UINPXImageLine
// ClassId: 5447
// RuntimeId: 17559
// TypeInfo: 0x0000000144C7F300
#include "../Casablanca/UINPXLine.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UINPXImageLine : public Casablanca::UINPXLine {
        CString TextureName; // 0x50
    }; // 0x58
    static_assert(sizeof(UINPXImageLine) == 0x58);
}
#pragma pack(pop)