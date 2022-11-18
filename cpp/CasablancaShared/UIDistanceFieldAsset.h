// Object: UIDistanceFieldAsset
// ClassId: 878
// RuntimeId: 12018
// TypeInfo: 0x0000000144D21DF0
#include "../Core/Asset.h"
#include "../Render/TextureAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDistanceFieldAsset : public Core::Asset {
        Render::TextureAsset DistanceFieldTexture; // 0x20
    }; // 0x28
    static_assert(sizeof(UIDistanceFieldAsset) == 0x28);
}
#pragma pack(pop)