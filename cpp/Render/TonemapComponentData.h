// Object: TonemapComponentData
// ClassId: 1913
// RuntimeId: 3130
// TypeInfo: 0x0000000144F1CB00
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Render/TonemapMethod.h"
#include "../Core/Vec3.h"
#include "../RenderBase/BloomMethod.h"
#include "../RenderBase/TextureBaseAsset.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace Render {
    class TonemapComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 BloomScale; // 0x90
        Core::Vec3 Gaussian1Color; // 0xA0
        Core::Vec3 Gaussian2Color; // 0xB0
        Core::Vec3 Gaussian3Color; // 0xC0
        Core::Vec3 Gaussian4Color; // 0xD0
        Core::Vec3 Gaussian5Color; // 0xE0
        Core::Vec3 LensDirtBias; // 0xF0
        Core::Vec3 LensDirtFactor; // 0x100
        Core::Vec3 LensDirtExponent; // 0x110
        Float32 EV; // 0x120
        Float32 ExposureCompensation; // 0x124
        Float32 AutoExposureDarkestExclude; // 0x128
        Float32 AutoExposureBrightestExclude; // 0x12C
        Float32 DarkAdaptationTime; // 0x130
        Float32 LightAdaptationTime; // 0x134
        Float32 AutoExposureHigherThreshold; // 0x138
        Float32 AutoExposureLowerThreshold; // 0x13C
        Float32 MinEV; // 0x140
        Float32 MaxEV; // 0x144
        Float32 SpotMeterScale; // 0x148
        Render::TonemapMethod TonemapMethod; // 0x14C
        Float32 BlackPoint; // 0x150
        Float32 WhitePoint; // 0x154
        Float32 CrossOverPoint; // 0x158
        Float32 ShoulderCrossOverPoint; // 0x15C
        Float32 ToeStrength; // 0x160
        Float32 ShoulderStrength; // 0x164
        Float32 Saturation; // 0x168
        Float32 BloomSoftClip; // 0x16C
        RenderBase::BloomMethod BloomMethod; // 0x170
        Float32 GaussianSharpness; // 0x174
        Float32 Gaussian1Weight; // 0x178
        Float32 Gaussian2Weight; // 0x17C
        Float32 Gaussian3Weight; // 0x180
        Float32 Gaussian4Weight; // 0x184
        Float32 Gaussian5Weight; // 0x188
        Float32 FFTThreshold; // 0x18C
        Float32 FFTCutoff; // 0x190
        Float32 FFTKernelScale; // 0x194
        Float32 FFTKernelRotation; // 0x198
        Float32 FFTSpikeScaleLimit; // 0x19C
        RenderBase::TextureBaseAsset FFTKernelTexture; // 0x1A0
        Float32 ChromostereopsisScale; // 0x1A8
        Float32 ChromostereopsisOffset; // 0x1AC
        RenderBase::TextureBaseAsset LensDirtTexture; // 0x1B0
        Uint32 FieldFlagOverride0; // 0x1B8
        Uint32 FieldFlagOverride1; // 0x1BC
        Boolean AutomaticExposure; // 0x1C0
        Boolean ClampEV; // 0x1C1
        Boolean FFTSpikeScaleLimitEnable; // 0x1C2
        Boolean ChromostereopsisEnable; // 0x1C3
        char pad_0x1C4[0xC];
    }; // 0x1D0
    static_assert(sizeof(TonemapComponentData) == 0x1D0);
}
#pragma pack(pop)