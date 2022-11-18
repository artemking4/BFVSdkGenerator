// Object: MusicInterfaceAsset
// ClassId: 589
// RuntimeId: 33493
// TypeInfo: 0x0000000144E1D440
#include "../Core/Asset.h"
#include "../Audio/MusicEventData.h"
#include "../Audio/MusicParameterData.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicInterfaceAsset : public Core::Asset {
        Array<Audio::MusicEventData> Events; // 0x20
        Array<Audio::MusicParameterData> Parameters; // 0x28
    }; // 0x30
    static_assert(sizeof(MusicInterfaceAsset) == 0x30);
}
#pragma pack(pop)