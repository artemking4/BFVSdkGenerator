// Object: LogitechLEDFadeEffectEntityData
// ClassId: 2861
// RuntimeId: 10617
// TypeInfo: 0x0000000144DBF4B0
#include "../Entity/EntityData.h"
#include "../DiceCommonsShared/LogitechLEDDevice.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class LogitechLEDFadeEffectEntityData : public Entity::EntityData {
        DiceCommonsShared::LogitechLEDDevice LogitechLEDDevice; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Color1; // 0x30
        Core::Vec3 Color2; // 0x40
        Float32 Duration; // 0x50
        Boolean Enabled; // 0x54
        char pad_0x55[0xB];
    }; // 0x60
    static_assert(sizeof(LogitechLEDFadeEffectEntityData) == 0x60);
}
#pragma pack(pop)