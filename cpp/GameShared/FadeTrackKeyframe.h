// Object: FadeTrackKeyframe
// ClassId: 1618
// RuntimeId: 64988
// TypeInfo: 0x0000000144E96A30
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../GameShared/FadeTrackKeyframeType.h"

#pragma pack(push, 8)
namespace GameShared {
    class FadeTrackKeyframe : public Core::DataContainer {
        Float32 Time; // 0x18
        Float32 Length; // 0x1C
        GameShared::FadeTrackKeyframeType FadeType; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(FadeTrackKeyframe) == 0x28);
}
#pragma pack(pop)