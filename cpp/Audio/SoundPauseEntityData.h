// Object: SoundPauseEntityData
// ClassId: 3236
// RuntimeId: 42767
// TypeInfo: 0x0000000144E1DDC0
#include "../Entity/EntityData.h"
#include "../Audio/MixGroup.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundPauseEntityData : public Entity::EntityData {
        Array<Audio::MixGroup> ExclusionList; // 0x20
    }; // 0x28
    static_assert(sizeof(SoundPauseEntityData) == 0x28);
}
#pragma pack(pop)