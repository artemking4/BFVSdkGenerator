// Object: SoundEntityData
// ClassId: 3232
// RuntimeId: 48345
// TypeInfo: 0x0000000144E1E140
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Audio {
    class SoundEntityData : public Entity::EntityData {
        Audio::SoundAsset Sound; // 0x20
        char pad_0x28[0x8];
        Core::LinearTransform Transform; // 0x30
        Float32 MasterAmplitude; // 0x70
        Boolean PlayOnCreation; // 0x74
        Boolean EnableOnCreation; // 0x75
        Boolean UseParentTransform; // 0x76
        Boolean ForgetOnDestroy; // 0x77
        char pad_0x78[0x8];
    }; // 0x80
    static_assert(sizeof(SoundEntityData) == 0x80);
}
#pragma pack(pop)