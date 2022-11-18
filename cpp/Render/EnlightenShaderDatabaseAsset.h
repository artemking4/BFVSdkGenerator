// Object: EnlightenShaderDatabaseAsset
// ClassId: 491
// RuntimeId: 20803
// TypeInfo: 0x0000000144F16D50
#include "../Core/Asset.h"
#include "../Global/Uint32.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace Render {
    class EnlightenShaderDatabaseAsset : public Core::Asset {
        Uint32 NumShaders; // 0x20
        char pad_0x24[0x4];
        ResourceRef DatabaseResource; // 0x28
    }; // 0x30
    static_assert(sizeof(EnlightenShaderDatabaseAsset) == 0x30);
}
#pragma pack(pop)