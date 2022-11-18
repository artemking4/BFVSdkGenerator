// Object: MusicFadeData
// ClassId: 4330
// RuntimeId: 44350
// TypeInfo: 0x0000000144E1D840
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Audio/MusicFadeType.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicFadeData : public Core::DataContainer {
        Float32 FadeOutLength; // 0x18
        Audio::MusicFadeType FadeOutType; // 0x1C
        Float32 FadeInLength; // 0x20
        Audio::MusicFadeType FadeInType; // 0x24
        Boolean EqualPower; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(MusicFadeData) == 0x30);
}
#pragma pack(pop)