// Object: RefuelWeaponData
// ClassId: 5219
// RuntimeId: 49287
// TypeInfo: 0x0000000144D01EA0
#include "../CasablancaShared/BFWeaponData.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RefuelWeaponData : public CasablancaShared::BFWeaponData {
        Audio::SoundAsset RefuelSound; // 0x28
        Float32 SoundKeepAliveTimer; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(RefuelWeaponData) == 0x38);
}
#pragma pack(pop)