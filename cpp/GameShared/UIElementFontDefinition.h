// Object: UIElementFontDefinition
// ClassId: 5391
// RuntimeId: 15327
// TypeInfo: 0x0000000144E95C30
#include "../Core/DataContainer.h"
#include "../GameShared/UIImmediateModeFontLookup.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class UIElementFontDefinition : public Core::DataContainer {
        Array<GameShared::UIImmediateModeFontLookup> FontLookup; // 0x18
        Float32 PointSize; // 0x20
        Float32 LetterSpacing; // 0x24
        Int32 RowSpacing; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(UIElementFontDefinition) == 0x30);
}
#pragma pack(pop)