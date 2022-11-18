// Object: SoundMasterEntityData
// ClassId: 3235
// RuntimeId: 37990
// TypeInfo: 0x0000000144E1E0C0
#include "../Entity/EntityData.h"
#include "../Audio/SoundMasterPatchAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundMasterEntityData : public Entity::EntityData {
        Audio::SoundMasterPatchAsset Master; // 0x20
        Boolean SupportDynamicPropeties; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SoundMasterEntityData) == 0x30);
}
#pragma pack(pop)