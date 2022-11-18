// Object: DICEVoiceOverDialogTakeMeta
// ClassId: 5572
// RuntimeId: 59293
// TypeInfo: 0x0000000144DB33B0
#include "../Audio/VoiceOverDialogTakeMeta.h"
#include "../DiceCommonsShared/FacialAnimationInfo.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DICEVoiceOverDialogTakeMeta : public Audio::VoiceOverDialogTakeMeta {
        Array<DiceCommonsShared::FacialAnimationInfo> FacialAnimations; // 0x18
    }; // 0x20
    static_assert(sizeof(DICEVoiceOverDialogTakeMeta) == 0x20);
}
#pragma pack(pop)