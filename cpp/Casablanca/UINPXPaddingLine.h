// Object: UINPXPaddingLine
// ClassId: 5449
// RuntimeId: 410
// TypeInfo: 0x0000000144C7F380
#include "../Casablanca/UINPXLine.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UINPXPaddingLine : public Casablanca::UINPXLine {
        Float32 Height; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(UINPXPaddingLine) == 0x58);
}
#pragma pack(pop)