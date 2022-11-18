// Object: ColorBlindObjectList
// ClassId: 1417
// RuntimeId: 226
// TypeInfo: 0x0000000144D876A0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/ColorBlindObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ColorBlindObjectList : public Core::DataContainer {
        Array<CasablancaShared::ColorBlindObject> Colors; // 0x18
    }; // 0x20
    static_assert(sizeof(ColorBlindObjectList) == 0x20);
}
#pragma pack(pop)