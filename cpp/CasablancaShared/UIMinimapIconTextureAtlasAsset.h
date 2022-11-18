// Object: UIMinimapIconTextureAtlasAsset
// ClassId: 888
// RuntimeId: 48333
// TypeInfo: 0x0000000144D21CF0
#include "../Core/Asset.h"
#include "../CasablancaShared/UIMinimapIconTexture.h"
#include "../Global/Boolean.h"
#include "../Render/TextureAsset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMinimapIconTextureAtlasAsset : public Core::Asset {
        Array<CasablancaShared::UIMinimapIconTexture> Icons; // 0x20
        Render::TextureAsset TextureAtlas; // 0x28
        CString JsonData; // 0x30
        Boolean OnDemandEnable; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(UIMinimapIconTextureAtlasAsset) == 0x40);
}
#pragma pack(pop)