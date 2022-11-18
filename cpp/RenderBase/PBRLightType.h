// Object: PBRLightType
// RuntimeId: 44116
// TypeInfo: 0x0000000144F24B90

namespace RenderBase {
    enum PBRLightType {
        PBRLightType_AreaLight = 0,
        PBRLightType_AreaLightShadow = 1,
        PBRLightType_PunctualLight = 2,
        PBRLightType_PunctualLightShadow = 3,
        PBRLightType_LocalIBL = 4,
        PBRLightType_LocalPR = 5,
        PBRLightTypeCount = 6
    };
}