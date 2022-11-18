// Object: TeamLogoMapping
// ClassId: 5048
// RuntimeId: 30375
// TypeInfo: 0x0000000144D5BDE0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../Render/TextureAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class TeamLogoMapping : public Core::DataContainer {
        Int32 Faction; // 0x18
        char pad_0x1C[0x4];
        Render::TextureAsset LogoTexture; // 0x20
    }; // 0x28
    static_assert(sizeof(TeamLogoMapping) == 0x28);
}
#pragma pack(pop)