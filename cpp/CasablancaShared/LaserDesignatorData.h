// Object: LaserDesignatorData
// ClassId: 5209
// RuntimeId: 65449
// TypeInfo: 0x0000000144D3F950
#include "../CasablancaShared/LockingWeaponData.h"
#include "../Global/Float32.h"
#include "../Audio/SoundAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LaserDesignatorData : public CasablancaShared::LockingWeaponData {
        Float32 PostLockTime; // 0x48
        Float32 BomberTime; // 0x4C
        Float32 BombWarnTime; // 0x50
        char pad_0x54[0x4];
        Audio::SoundAsset BomberSound; // 0x58
    }; // 0x60
    static_assert(sizeof(LaserDesignatorData) == 0x60);
}
#pragma pack(pop)