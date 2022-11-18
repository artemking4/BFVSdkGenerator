// Object: ColorListAsset
// ClassId: 220
// RuntimeId: 28388
// TypeInfo: 0x0000000144F6E7C0
#include "../UIIncubatorShared/ConfigListAsset.h"
#include "../UIIncubatorShared/ColorData.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class ColorListAsset : public UIIncubatorShared::ConfigListAsset {
        Array<UIIncubatorShared::ColorData> ColorTypes; // 0x20
    }; // 0x28
    static_assert(sizeof(ColorListAsset) == 0x28);
}
#pragma pack(pop)