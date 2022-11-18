// Object: UIElementTextFilterBlur
// ClassId: 5393
// RuntimeId: 46188
// TypeInfo: 0x0000000144E95DB0
#include "../GameShared/UIElementTextFilter.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class UIElementTextFilterBlur : public GameShared::UIElementTextFilter {
        Float32 X; // 0x18
        Float32 Y; // 0x1C
        Float32 Strength; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UIElementTextFilterBlur) == 0x28);
}
#pragma pack(pop)