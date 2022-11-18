// Object: SubSurfaceScatteringComponentData
// ClassId: 1911
// RuntimeId: 58483
// TypeInfo: 0x0000000144EC1A40
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Render/SubSurfaceProfile.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace WorldSim {
    class SubSurfaceScatteringComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 SimpleSssColor; // 0x90
        Float32 SimpleSssRolloffKeyLight; // 0xA0
        Float32 SimpleSssRolloffLocalLight; // 0xA4
        Render::SubSurfaceProfile Profile0; // 0xA8
        Render::SubSurfaceProfile Profile1; // 0xD4
        Render::SubSurfaceProfile Profile2; // 0x100
        Render::SubSurfaceProfile Profile3; // 0x12C
        Render::SubSurfaceProfile Profile4; // 0x158
        Render::SubSurfaceProfile Profile5; // 0x184
        Render::SubSurfaceProfile Profile6; // 0x1B0
        Render::SubSurfaceProfile ProfileOATS; // 0x1DC
        Uint16 FieldFlagOverride0; // 0x208
        Boolean LocalLightTranslucencyEnable; // 0x20A
        char pad_0x20B[0x5];
    }; // 0x210
    static_assert(sizeof(SubSurfaceScatteringComponentData) == 0x210);
}
#pragma pack(pop)