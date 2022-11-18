// Object: DiceSoundEntityData
// ClassId: 2625
// RuntimeId: 17803
// TypeInfo: 0x0000000144DB32B0
#include "../Entity/EntityData.h"
#include "../DiceCommonsShared/EntityAttachData.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class DiceSoundEntityData : public Entity::EntityData {
        DiceCommonsShared::EntityAttachData Attach; // 0x20
        char pad_0x28[0x8];
        Core::LinearTransform Transform; // 0x30
        Audio::SoundAsset DefaultSound; // 0x70
        Audio::SoundAsset Sound; // 0x78
        Float32 MasterAmplitude; // 0x80
        Boolean UpdatePosition; // 0x84
        Boolean PlayOnCreation; // 0x85
        Boolean EnableOnCreation; // 0x86
        Boolean ForgetOnDestroy; // 0x87
        Boolean DisableWhenDeactivated; // 0x88
        char pad_0x89[0x7];
    }; // 0x90
    static_assert(sizeof(DiceSoundEntityData) == 0x90);
}
#pragma pack(pop)