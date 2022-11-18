// Object: TurretRotationSoundComponentData
// ClassId: 1864
// RuntimeId: 17697
// TypeInfo: 0x0000000144D224F0
#include "../Entity/GameComponentData.h"
#include "../Audio/SoundAsset.h"
#include "../CasablancaShared/RotationDirection.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class TurretRotationSoundComponentData : public Entity::GameComponentData {
        Audio::SoundAsset RotationDirection1Sound; // 0x80
        Audio::SoundAsset RotationDirection2Sound; // 0x88
        CasablancaShared::RotationDirection RotationDirection1; // 0x90
        CasablancaShared::RotationDirection RotationDirection2; // 0x94
        Float32 StartStopRpmThreshold; // 0x98
        Boolean TurretBroken; // 0x9C
        char pad_0x9D[0x3];
    }; // 0xA0
    static_assert(sizeof(TurretRotationSoundComponentData) == 0xA0);
}
#pragma pack(pop)