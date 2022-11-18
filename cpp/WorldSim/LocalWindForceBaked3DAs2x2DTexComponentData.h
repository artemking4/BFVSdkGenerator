// Object: LocalWindForceBaked3DAs2x2DTexComponentData
// ClassId: 1796
// RuntimeId: 18146
// TypeInfo: 0x0000000144EC0940
#include "../WorldSim/LocalWindForceComponentBaseData.h"
#include "../Global/Float32.h"
#include "../RenderBase/TextureBaseAsset.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace WorldSim {
    class LocalWindForceBaked3DAs2x2DTexComponentData : public WorldSim::LocalWindForceComponentBaseData {
        Core::Vec3 VolumeSliceZXScale; // 0xB0
        Core::Vec3 VolumeSliceZYScale; // 0xC0
        Float32 SizeX; // 0xD0
        Float32 SizeY; // 0xD4
        Float32 SizeZ; // 0xD8
        Float32 Attenuation; // 0xDC
        RenderBase::TextureBaseAsset VolumeSliceZX; // 0xE0
        RenderBase::TextureBaseAsset VolumeSliceZY; // 0xE8
    }; // 0xF0
    static_assert(sizeof(LocalWindForceBaked3DAs2x2DTexComponentData) == 0xF0);
}
#pragma pack(pop)