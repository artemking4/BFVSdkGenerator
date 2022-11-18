// Object: TrackComponentData
// ClassId: 1806
// RuntimeId: 7914
// TypeInfo: 0x0000000144E8DAE0
#include "../GameShared/FakePhysicsMeshComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class TrackComponentData : public GameShared::FakePhysicsMeshComponentData {
        Float32 ScrollFactor; // 0xB0
        Boolean HandleTrackWheelsAsASingleTrack; // 0xB4
        Boolean IsVisible; // 0xB5
        char pad_0xB6[0xA];
    }; // 0xC0
    static_assert(sizeof(TrackComponentData) == 0xC0);
}
#pragma pack(pop)