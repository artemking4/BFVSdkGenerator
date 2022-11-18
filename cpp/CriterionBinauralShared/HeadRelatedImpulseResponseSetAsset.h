// Object: HeadRelatedImpulseResponseSetAsset
// ClassId: 529
// RuntimeId: 8258
// TypeInfo: 0x0000000144DA4040
#include "../Core/Asset.h"
#include "../CriterionBinauralShared/ImpulseResponseType.h"
#include "../Global/Int32.h"
#include "../CriterionBinauralShared/HeadRelatedImpulseResponse.h"
#include "../CriterionBinauralShared/SpeakerTriangle.h"
#include "../CriterionBinauralShared/PanLaw.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Uint8.h"
#include "../Core/Vec4.h"
#include "../CriterionBinauralShared/VectorBasePanningTransform.h"

#pragma pack(push, 8)
namespace CriterionBinauralShared {
    class HeadRelatedImpulseResponseSetAsset : public Core::Asset {
        CriterionBinauralShared::ImpulseResponseType ImpulseResponseType; // 0x20
        Int32 ImpulseResponseLength; // 0x24
        Array<CriterionBinauralShared::HeadRelatedImpulseResponse> HeadRelatedImpulseResponses; // 0x28
        Array<CriterionBinauralShared::SpeakerTriangle> SpeakerTriangles; // 0x30
        CriterionBinauralShared::PanLaw PanLaw; // 0x38
        Float32 CrossoverFrequency; // 0x3C
        Float32 FinalAmplitude; // 0x40
        Uint32 NumChannels; // 0x44
        Uint32 PreDelaySamples; // 0x48
        char pad_0x4C[0x4];
        Array<Core::Vec4> HrirsDirectionAndRadius; // 0x50
        Array<CriterionBinauralShared::VectorBasePanningTransform> Transforms; // 0x58
        Array<Uint8> InputDelaysL; // 0x60
        Array<Uint8> InputDelaysR; // 0x68
        Array<Uint8> FullBleedSpeakers; // 0x70
        Boolean UseInterpolatedPreDelays; // 0x78
        Uint8 MaxInputDelaySamples; // 0x79
        char pad_0x7A[0x6];
    }; // 0x80
    static_assert(sizeof(HeadRelatedImpulseResponseSetAsset) == 0x80);
}
#pragma pack(pop)