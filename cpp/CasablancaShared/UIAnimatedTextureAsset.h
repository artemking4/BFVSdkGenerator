// Object: UIAnimatedTextureAsset
// ClassId: 867
// RuntimeId: 13557
// TypeInfo: 0x0000000144D21E70
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Render/TextureAsset.h"
#include "../CasablancaShared/UITextureAtlasInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIAnimatedTextureAsset : public Core::Asset {
        Float32 FrameRate; // 0x20
        char pad_0x24[0x4];
        Render::TextureAsset TextureAtlas; // 0x28
        Array<CasablancaShared::UITextureAtlasInfo> TextureInfos; // 0x30
    }; // 0x38
    static_assert(sizeof(UIAnimatedTextureAsset) == 0x38);
}
#pragma pack(pop)