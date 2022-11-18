// Object: LogitechLEDFadeSpeakerEffectEntityData
// ClassId: 2862
// RuntimeId: 59974
// TypeInfo: 0x0000000144DBF1B0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class LogitechLEDFadeSpeakerEffectEntityData : public Entity::EntityData {
        Float32 Duration; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 ColorFrontLeft1; // 0x30
        Core::Vec3 ColorFrontLeft2; // 0x40
        Core::Vec3 ColorFrontRight1; // 0x50
        Core::Vec3 ColorFrontRight2; // 0x60
        Core::Vec3 ColorBackLeft1; // 0x70
        Core::Vec3 ColorBackLeft2; // 0x80
        Core::Vec3 ColorBackRight1; // 0x90
        Core::Vec3 ColorBackRight2; // 0xA0
        Boolean Enabled; // 0xB0
        char pad_0xB1[0xF];
    }; // 0xC0
    static_assert(sizeof(LogitechLEDFadeSpeakerEffectEntityData) == 0xC0);
}
#pragma pack(pop)