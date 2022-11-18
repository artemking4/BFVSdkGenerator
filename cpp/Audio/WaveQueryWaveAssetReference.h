// Object: WaveQueryWaveAssetReference
// ClassId: 5645
// RuntimeId: 20637
// TypeInfo: 0x0000000144E02370
#include "../Core/DataContainer.h"
#include "../Audio/NewWaveAsset.h"
#include "../Audio/NewWaveSelectionGroup.h"

#pragma pack(push, 8)
namespace Audio {
    class WaveQueryWaveAssetReference : public Core::DataContainer {
        Audio::NewWaveAsset WaveAsset; // 0x18
        Audio::NewWaveSelectionGroup SelectionGroup; // 0x20
    }; // 0x28
    static_assert(sizeof(WaveQueryWaveAssetReference) == 0x28);
}
#pragma pack(pop)