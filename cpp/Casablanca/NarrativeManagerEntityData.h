// Object: NarrativeManagerEntityData
// ClassId: 2900
// RuntimeId: 47796
// TypeInfo: 0x0000000144C83640
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace Casablanca {
    class NarrativeManagerEntityData : public Entity::EntityData {
        Array<Int32> Sequence; // 0x20
        Float32 FadeTime; // 0x28
        GameShared::TeamId TeamFilter; // 0x2C
        Boolean FadeUI; // 0x30
        Boolean FadeAudio; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(NarrativeManagerEntityData) == 0x38);
}
#pragma pack(pop)