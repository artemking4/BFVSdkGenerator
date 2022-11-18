// Object: LocalWindForceBaked3DAs2x2DTexEntityData
// ClassId: 3401
// RuntimeId: 16979
// TypeInfo: 0x0000000144EC93E0
#include "../WorldSim/LocalWindForceEntityBaseData.h"
#include "../Global/Float32.h"
#include "../RenderBase/TextureBaseAsset.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace WorldSim {
    class LocalWindForceBaked3DAs2x2DTexEntityData : public WorldSim::LocalWindForceEntityBaseData {
        Core::Vec3 VolumeSliceZXScale; // 0x90
        Core::Vec3 VolumeSliceZYScale; // 0xA0
        Float32 SizeX; // 0xB0
        Float32 SizeY; // 0xB4
        Float32 SizeZ; // 0xB8
        Float32 Attenuation; // 0xBC
        RenderBase::TextureBaseAsset VolumeSliceZX; // 0xC0
        RenderBase::TextureBaseAsset VolumeSliceZY; // 0xC8
    }; // 0xD0
    static_assert(sizeof(LocalWindForceBaked3DAs2x2DTexEntityData) == 0xD0);
}
#pragma pack(pop)