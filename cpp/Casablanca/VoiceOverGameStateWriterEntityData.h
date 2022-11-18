// Object: VoiceOverGameStateWriterEntityData
// ClassId: 3890
// RuntimeId: 2069
// TypeInfo: 0x0000000144C32070
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class VoiceOverGameStateWriterEntityData : public Entity::EntityData {
        CString PropertyName; // 0x20
        Float32 Value; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(VoiceOverGameStateWriterEntityData) == 0x30);
}
#pragma pack(pop)