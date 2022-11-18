// Object: SoundScopeSetupEntityData
// ClassId: 3238
// RuntimeId: 50548
// TypeInfo: 0x0000000144E1DFC0
#include "../Entity/EntityData.h"
#include "../Audio/SoundScopeSetupData.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundScopeSetupEntityData : public Entity::EntityData {
        Audio::SoundScopeSetupData Setup; // 0x20
    }; // 0x28
    static_assert(sizeof(SoundScopeSetupEntityData) == 0x28);
}
#pragma pack(pop)