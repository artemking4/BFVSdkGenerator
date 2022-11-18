// Object: NewWaveAsset
// ClassId: 752
// RuntimeId: 25913
// TypeInfo: 0x0000000144E156C0
#include "../Audio/SoundWaveAssetBase.h"
#include "../Audio/NewWaveSelectionGroup.h"
#include "../Global/Boolean.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace Audio {
    class NewWaveAsset : public Audio::SoundWaveAssetBase {
        Audio::NewWaveSelectionGroup DefaultSelectionGroup; // 0x48
        Boolean IsSeekable; // 0x50
        Uint8 SelectionParameterCount; // 0x51
        Uint8 ControlParameterCount; // 0x52
        char pad_0x53[0x5];
    }; // 0x58
    static_assert(sizeof(NewWaveAsset) == 0x58);
}
#pragma pack(pop)