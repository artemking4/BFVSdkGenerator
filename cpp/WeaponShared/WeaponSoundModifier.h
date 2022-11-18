// Object: WeaponSoundModifier
// ClassId: 5686
// RuntimeId: 27271
// TypeInfo: 0x0000000144F7A8E0
#include "../WeaponShared/WeaponModifierDynamicBase.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponSoundModifier : public WeaponShared::WeaponModifierDynamicBase {
        Audio::SoundAsset Sound; // 0x20
        Audio::SoundAsset SoundRemotePlayer; // 0x28
        Boolean MutePrimarySoundWhenActive; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(WeaponSoundModifier) == 0x38);
}
#pragma pack(pop)