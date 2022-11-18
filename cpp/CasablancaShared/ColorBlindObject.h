// Object: ColorBlindObject
// ClassId: 1416
// RuntimeId: 26956
// TypeInfo: 0x0000000144D87720
#include "../Core/DataContainer.h"
#include "../GameShared/UIElementColor.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class ColorBlindObject : public Core::DataContainer {
        CString Name; // 0x18
        CString OptionSid; // 0x20
        char pad_0x28[0x8];
        GameShared::UIElementColor Color; // 0x30
    }; // 0x50
    static_assert(sizeof(ColorBlindObject) == 0x50);
}
#pragma pack(pop)