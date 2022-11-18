// Object: SoundBusPatchBaseAsset
// ClassId: 744
// RuntimeId: 16275
// TypeInfo: 0x0000000144E16740
#include "../Core/Asset.h"
#include "../Audio/SoundGraphData.h"
#include "../Audio/SoundBusData.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundBusPatchBaseAsset : public Core::Asset {
        Audio::SoundGraphData Graph; // 0x20
        Array<Audio::SoundBusData> Busses; // 0x28
    }; // 0x30
    static_assert(sizeof(SoundBusPatchBaseAsset) == 0x30);
}
#pragma pack(pop)