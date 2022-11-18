// Object: MusicBaseAsset
// ClassId: 586
// RuntimeId: 24228
// TypeInfo: 0x0000000144E1D0C0
#include "../Core/Asset.h"
#include "../Audio/MusicInterfaceAsset.h"
#include "../Global/Uint32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicBaseAsset : public Core::Asset {
        Audio::MusicInterfaceAsset Interface; // 0x20
        Uint32 MaxOverlayCount; // 0x28
        Uint8 ChannelCount; // 0x2C
        Uint8 OverlayChannelCount; // 0x2D
        char pad_0x2E[0x2];
    }; // 0x30
    static_assert(sizeof(MusicBaseAsset) == 0x30);
}
#pragma pack(pop)