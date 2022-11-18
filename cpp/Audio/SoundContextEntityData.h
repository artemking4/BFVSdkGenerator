// Object: SoundContextEntityData
// ClassId: 3229
// RuntimeId: 21299
// TypeInfo: 0x0000000144E1DC40
#include "../Entity/EntityData.h"
#include "../Audio/SoundContextGroupData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundContextEntityData : public Entity::EntityData {
        Audio::SoundContextGroupData ContextGroup; // 0x20
        Boolean ActivateOnCreation; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SoundContextEntityData) == 0x30);
}
#pragma pack(pop)