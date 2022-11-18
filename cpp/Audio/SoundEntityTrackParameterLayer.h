// Object: SoundEntityTrackParameterLayer
// ClassId: 8635
// RuntimeId: 51412
// TypeInfo: 0x0000000144E20290
#include "../Audio/SoundEntityTrackLayer.h"

namespace Audio {
    class SoundEntityTrackParameterLayer : public Audio::SoundEntityTrackLayer {
        char pad_0x58[0x8];
    }; // 0x60
    static_assert(sizeof(SoundEntityTrackParameterLayer) == 0x60);
}