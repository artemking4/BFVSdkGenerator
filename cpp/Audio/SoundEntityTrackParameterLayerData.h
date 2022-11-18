// Object: SoundEntityTrackParameterLayerData
// ClassId: 4058
// RuntimeId: 16605
// TypeInfo: 0x0000000144E1E340
#include "../Audio/SoundEntityTrackLayerData.h"
#include "../Timeline/CurveData.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundEntityTrackParameterLayerData : public Audio::SoundEntityTrackLayerData {
        Timeline::CurveData CurveData; // 0x38
    }; // 0x40
    static_assert(sizeof(SoundEntityTrackParameterLayerData) == 0x40);
}
#pragma pack(pop)