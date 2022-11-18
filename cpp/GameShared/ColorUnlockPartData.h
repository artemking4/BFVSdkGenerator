// Object: ColorUnlockPartData
// ClassId: 1418
// RuntimeId: 33759
// TypeInfo: 0x0000000144E81CC0
#include "../Core/DataContainer.h"
#include "../GameShared/ColorReference.h"

#pragma pack(push, 8)
namespace GameShared {
    class ColorUnlockPartData : public Core::DataContainer {
        GameShared::ColorReference ColorReference; // 0x18
    }; // 0x20
    static_assert(sizeof(ColorUnlockPartData) == 0x20);
}
#pragma pack(pop)