// Object: SvgBaseImage
// ClassId: 780
// RuntimeId: 19494
// TypeInfo: 0x0000000144DFA030
#include "../Core/Asset.h"
#include "../Global/ResourceRef.h"

namespace DiceSvgRasterizerShared {
    class SvgBaseImage : public Core::Asset {
        ResourceRef Resource; // 0x20
    }; // 0x28
    static_assert(sizeof(SvgBaseImage) == 0x28);
}