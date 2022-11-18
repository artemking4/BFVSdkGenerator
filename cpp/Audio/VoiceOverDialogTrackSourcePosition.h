// Object: VoiceOverDialogTrackSourcePosition
// ClassId: 5584
// RuntimeId: 44202
// TypeInfo: 0x0000000144E1B3C0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverDialogTrackSourcePosition : public Core::DataContainer {
        Uint32 TrackSourcePositionNameHash; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(VoiceOverDialogTrackSourcePosition) == 0x20);
}
#pragma pack(pop)