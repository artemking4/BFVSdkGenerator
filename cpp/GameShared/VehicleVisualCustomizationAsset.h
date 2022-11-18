// Object: VehicleVisualCustomizationAsset
// ClassId: 904
// RuntimeId: 51560
// TypeInfo: 0x0000000144E81640
#include "../Core/Asset.h"
#include "../GameShared/ShaderTextureUnlockPartCollection.h"
#include "../GameShared/TextUnlockPartData.h"

#pragma pack(push, 8)
namespace GameShared {
    class VehicleVisualCustomizationAsset : public Core::Asset {
        Array<GameShared::ShaderTextureUnlockPartCollection> TextureUnlockPartCollections; // 0x20
        Array<GameShared::TextUnlockPartData> TextUnlockParts; // 0x28
    }; // 0x30
    static_assert(sizeof(VehicleVisualCustomizationAsset) == 0x30);
}
#pragma pack(pop)