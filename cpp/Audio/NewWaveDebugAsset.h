// Object: NewWaveDebugAsset
// ClassId: 594
// RuntimeId: 32027
// TypeInfo: 0x0000000144E155C0
#include "../Core/Asset.h"
#include "../Audio/NewWaveVariationDebugData.h"

#pragma pack(push, 8)
namespace Audio {
    class NewWaveDebugAsset : public Core::Asset {
        Array<Audio::NewWaveVariationDebugData> Variations; // 0x20
    }; // 0x28
    static_assert(sizeof(NewWaveDebugAsset) == 0x28);
}
#pragma pack(pop)