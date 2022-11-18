// Object: DestructionVolumeData
// ClassId: 1515
// RuntimeId: 65473
// TypeInfo: 0x0000000144EB9B60
#include "../WorldBase/DestructionVolumeBaseData.h"
#include "../WorldRender/DestructionVolumeAsset.h"
#include "../Core/AxisAlignedBox.h"
#include "../Core/Vec4.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace WorldRender {
    class DestructionVolumeData : public WorldBase::DestructionVolumeBaseData {
        WorldRender::DestructionVolumeAsset Asset; // 0x18
        Array<Core::Vec4> Impacts; // 0x20
        char pad_0x28[0x8];
        Core::AxisAlignedBox BoundingBox; // 0x30
        Array<Uint32> PartToImpactIndices; // 0x50
        char pad_0x58[0x8];
    }; // 0x60
    static_assert(sizeof(DestructionVolumeData) == 0x60);
}
#pragma pack(pop)