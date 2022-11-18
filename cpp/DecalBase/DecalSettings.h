// Object: DecalSettings
// ClassId: 4975
// RuntimeId: 10034
// TypeInfo: 0x0000000144DA5840
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DecalBase {
    class DecalSettings : public Core::SystemSettings {
        Uint32 RingBufferSizeInVerts; // 0x20
        Uint32 RingBufferRecreateSizeInVerts; // 0x24
        Uint32 ProjectedDecalsTrianglesPerJob; // 0x28
        Float32 DecalRecreateDistanceInMeters; // 0x2C
        Float32 DistanceCullFalloff; // 0x30
        Float32 MinOcclusionTestDistance; // 0x34
        Float32 MinOcclusionScreenArea; // 0x38
        Int32 DebugPerEntityBatches; // 0x3C
        Int32 DebugRingbuffer; // 0x40
        Float32 DisplacementBias; // 0x44
        Float32 DisplacementScale; // 0x48
        Uint32 MaxDecalObjectPrims; // 0x4C
        Uint32 MaxDecalCompositeObjectPrims; // 0x50
        Uint32 MaxTotalDecalObjectPrims; // 0x54
        Float32 DecalMaxDistance; // 0x58
        Boolean Enable; // 0x5C
        Boolean DrawEnable; // 0x5D
        Boolean DebugDrawEntityHandles; // 0x5E
        Boolean CullEnable; // 0x5F
        Boolean DistanceCullEnable; // 0x60
        Boolean FrustumCullEnable; // 0x61
        Boolean OcclusionCullEnable; // 0x62
        Boolean DebugOcclusionCullEnable; // 0x63
        Boolean DebugBatches; // 0x64
        Boolean WireframeEnable; // 0x65
        char pad_0x66[0x2];
    }; // 0x68
    static_assert(sizeof(DecalSettings) == 0x68);
}
#pragma pack(pop)