// Object: WaterSurfaceEntityData
// ClassId: 3335
// RuntimeId: 27132
// TypeInfo: 0x0000000144F72EC0
#include "../Physics/GamePhysicsEntityData.h"
#include "../Global/Float32.h"
#include "../WaterInteractSim/WaterEffectSetup.h"
#include "../Global/Boolean.h"
#include "../RenderBase/SurfaceShaderInstanceDataStruct.h"
#include "../Core/QualityScalableFloat.h"
#include "../WaterInteractSim/WaterEntityClipInfo.h"
#include "../Entity/MaterialDecl.h"
#include "../Core/QualityScalableBool.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace WaterInteractSim {
    class WaterSurfaceEntityData : public Physics::GamePhysicsEntityData {
        Float32 WaveAmplitudeScale; // 0xA0
        char pad_0xA4[0x4];
        WaterInteractSim::WaterEffectSetup EffectSetup; // 0xA8
        Float32 ShoreDepth; // 0xB0
        Float32 HoleDepth; // 0xB4
        RenderBase::SurfaceShaderInstanceDataStruct Shader; // 0xB8
        RenderBase::SurfaceShaderInstanceDataStruct ShaderLowDetail; // 0xE0
        Core::QualityScalableFloat LowDetailDistance; // 0x108
        Float32 ProjectorElevation; // 0x11C
        Entity::MaterialDecl MaterialPair; // 0x120
        Uint32 InteractiveMinGridSize; // 0x124
        Uint32 InteractiveMaxGridSize; // 0x128
        Float32 InteractiveWaveDisturbanceScale; // 0x12C
        Float32 InteractiveWaveSpeed; // 0x130
        Float32 InteractiveWaveDampening; // 0x134
        Boolean ShoreEnable; // 0x138
        Boolean TerrainVirtualTextureAccessEnable; // 0x139
        WaterInteractSim::WaterEntityClipInfo ClipInfo; // 0x13A
        Boolean Visible; // 0x13F
        Core::QualityScalableBool InteractiveWavesEnable; // 0x140
        char pad_0x145[0xB];
    }; // 0x150
    static_assert(sizeof(WaterSurfaceEntityData) == 0x150);
}
#pragma pack(pop)