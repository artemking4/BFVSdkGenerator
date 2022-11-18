// Object: LogitechLEDDefaultColorEntityData
// ClassId: 2859
// RuntimeId: 33459
// TypeInfo: 0x0000000144DBF730
#include "../Entity/EntityData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class LogitechLEDDefaultColorEntityData : public Entity::EntityData {
        Core::Vec3 KeyboardColor; // 0x20
        Core::Vec3 MouseColor; // 0x30
        Core::Vec3 HeadsetColor; // 0x40
        Core::Vec3 SpeakersColor; // 0x50
    }; // 0x60
    static_assert(sizeof(LogitechLEDDefaultColorEntityData) == 0x60);
}
#pragma pack(pop)