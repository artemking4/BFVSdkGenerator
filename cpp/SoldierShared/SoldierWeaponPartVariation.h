// Object: SoldierWeaponPartVariation
// ClassId: 4648
// RuntimeId: 8967
// TypeInfo: 0x0000000144F445B0
#include "../Core/DataContainer.h"
#include "../Core/LinearTransform.h"
#include "../Render/MeshAsset.h"
#include "../Global/Uint32.h"
#include "../Global/Guid.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierWeaponPartVariation : public Core::DataContainer {
        Render::MeshAsset Mesh1p; // 0x18
        Render::MeshAsset Mesh3p; // 0x20
        char pad_0x28[0x8];
        Core::LinearTransform Transform; // 0x30
        Core::LinearTransform TransformZoom; // 0x70
        Render::MeshAsset Mesh1pZoom; // 0xB0
        Render::MeshAsset Mesh3pZoom; // 0xB8
        Uint32 ObjectVariation1pNameHash; // 0xC0
        Uint32 ObjectVariation3pNameHash; // 0xC4
        Uint32 ObjectVariation1pZoomNameHash; // 0xC8
        Uint32 ObjectVariation3pZoomNameHash; // 0xCC
        Uint32 BoneNameHash; // 0xD0
        Guid UnlockAssetGuid; // 0xD4
        char pad_0xE4[0xC];
    }; // 0xF0
    static_assert(sizeof(SoldierWeaponPartVariation) == 0xF0);
}
#pragma pack(pop)