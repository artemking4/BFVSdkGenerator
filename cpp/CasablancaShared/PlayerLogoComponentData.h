// Object: PlayerLogoComponentData
// ClassId: 1831
// RuntimeId: 6897
// TypeInfo: 0x0000000144D5D360
#include "../GameShared/ShaderParameterComponentData.h"
#include "../CasablancaShared/PlayerDefaultLogoType.h"
#include "../Render/TextureAsset.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class PlayerLogoComponentData : public GameShared::ShaderParameterComponentData {
        CasablancaShared::PlayerDefaultLogoType DefaultLogoType; // 0x90
        char pad_0x94[0x4];
        Render::TextureAsset DefaultTexture; // 0x98
    }; // 0xA0
    static_assert(sizeof(PlayerLogoComponentData) == 0xA0);
}
#pragma pack(pop)