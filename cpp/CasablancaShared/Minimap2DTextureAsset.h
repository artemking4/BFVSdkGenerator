// Object: Minimap2DTextureAsset
// ClassId: 570
// RuntimeId: 46546
// TypeInfo: 0x0000000144D5BF60
#include "../Core/Asset.h"
#include "../CasablancaShared/Minimap2DTile.h"
#include "../Global/Guid.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class Minimap2DTextureAsset : public Core::Asset {
        Array<CasablancaShared::Minimap2DTile> Tiles; // 0x20
        Guid ImageDataURLChunk; // 0x28
        Uint32 ImageDataURLChunkSize; // 0x38
        Int32 RootTileIndex; // 0x3C
        Uint32 OutputSize; // 0x40
        Uint32 TextureTileSize; // 0x44
        Uint32 LowestTileResolution; // 0x48
        Uint32 SkipMips; // 0x4C
        Uint32 LowDetailSkipMips; // 0x50
        Boolean UseMipMappedStaticTile; // 0x54
        Boolean HasDetailVolumes; // 0x55
        char pad_0x56[0x2];
    }; // 0x58
    static_assert(sizeof(Minimap2DTextureAsset) == 0x58);
}
#pragma pack(pop)