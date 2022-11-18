// Object: MultitrackData
// ClassId: 4328
// RuntimeId: 4970
// TypeInfo: 0x0000000144E1D640
#include "../Core/DataContainer.h"
#include "../Audio/MusicParameterData.h"
#include "../Audio/SynchedFadeData.h"
#include "../Audio/MultitrackLayerData.h"

#pragma pack(push, 8)
namespace Audio {
    class MultitrackData : public Core::DataContainer {
        Audio::MusicParameterData LayerControlParameter; // 0x18
        Audio::SynchedFadeData RangeFade; // 0x20
        Array<Audio::MultitrackLayerData> Layers; // 0x28
    }; // 0x30
    static_assert(sizeof(MultitrackData) == 0x30);
}
#pragma pack(pop)