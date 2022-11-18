// Object: CameraComponentSoundData
// ClassId: 1281
// RuntimeId: 8086
// TypeInfo: 0x0000000144E821C0
#include "../Core/DataContainer.h"
#include "../Audio/SoundAsset.h"

#pragma pack(push, 8)
namespace GameShared {
    class CameraComponentSoundData : public Core::DataContainer {
        Audio::SoundAsset SwitchToAlternateViewSound; // 0x18
        Audio::SoundAsset SwitchToNormalViewSound; // 0x20
    }; // 0x28
    static_assert(sizeof(CameraComponentSoundData) == 0x28);
}
#pragma pack(pop)