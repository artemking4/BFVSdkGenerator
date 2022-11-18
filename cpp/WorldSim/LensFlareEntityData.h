// Object: LensFlareEntityData
// ClassId: 3382
// RuntimeId: 19845
// TypeInfo: 0x0000000144EC29C0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../WorldSim/LensFlareRenderMode.h"
#include "../WorldSim/LensFlareElement.h"

#pragma pack(push, 16)
namespace WorldSim {
    class LensFlareEntityData : public Entity::SpatialEntityData {
        Float32 Dimmer; // 0x60
        WorldSim::LensFlareRenderMode RenderMode; // 0x64
        Float32 OccluderSize; // 0x68
        Float32 DepthBias; // 0x6C
        Array<WorldSim::LensFlareElement> Elements; // 0x70
        Boolean Visible; // 0x78
        Boolean DebugDrawOccluder; // 0x79
        Boolean ScreenClip; // 0x7A
        Boolean VisibleForSameTeam; // 0x7B
        char pad_0x7C[0x4];
    }; // 0x80
    static_assert(sizeof(LensFlareEntityData) == 0x80);
}
#pragma pack(pop)