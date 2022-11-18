// Object: ClipAssetEvaluatorData
// ClassId: 1410
// RuntimeId: 28022
// TypeInfo: 0x0000000144E30A10
#include "../Core/DataContainer.h"
#include "../GameClient/ClipAssetLayerData.h"

#pragma pack(push, 8)
namespace GameClient {
    class ClipAssetEvaluatorData : public Core::DataContainer {
        Array<GameClient::ClipAssetLayerData> LayerTracks; // 0x18
    }; // 0x20
    static_assert(sizeof(ClipAssetEvaluatorData) == 0x20);
}
#pragma pack(pop)