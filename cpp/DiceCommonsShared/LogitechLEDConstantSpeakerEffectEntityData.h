// Object: LogitechLEDConstantSpeakerEffectEntityData
// ClassId: 2858
// RuntimeId: 1299
// TypeInfo: 0x0000000144DBF230
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class LogitechLEDConstantSpeakerEffectEntityData : public Entity::EntityData {
        Boolean Enabled; // 0x20
        char pad_0x21[0xF];
        Core::Vec3 ColorFrontLeft; // 0x30
        Core::Vec3 ColorFrontRight; // 0x40
        Core::Vec3 ColorBackLeft; // 0x50
        Core::Vec3 ColorBackRight; // 0x60
    }; // 0x70
    static_assert(sizeof(LogitechLEDConstantSpeakerEffectEntityData) == 0x70);
}
#pragma pack(pop)