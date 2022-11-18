// Object: AtlasTextureAsset
// ClassId: 150
// RuntimeId: 34072
// TypeInfo: 0x0000000144F170D0
#include "../Core/Asset.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace Render {
    class AtlasTextureAsset : public Core::Asset {
        Int32 AnimationColumnCount; // 0x20
        char pad_0x24[0x4];
        ResourceRef Resource; // 0x28
        Int32 AnimationFrameCount; // 0x30
        Boolean LeftRightTiles; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(AtlasTextureAsset) == 0x38);
}
#pragma pack(pop)