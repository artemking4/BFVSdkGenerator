// Object: UINPXLine
// ClassId: 5445
// RuntimeId: 40950
// TypeInfo: 0x0000000144C7F600
#include "../Casablanca/UITooltipBase.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UINPXLine : public Casablanca::UITooltipBase {
        CString Description; // 0x48
    }; // 0x50
    static_assert(sizeof(UINPXLine) == 0x50);
}
#pragma pack(pop)