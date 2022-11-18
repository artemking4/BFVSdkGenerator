// Object: LogitechLEDPulseEffectEntityData
// ClassId: 2865
// RuntimeId: 20188
// TypeInfo: 0x0000000144DBF430
#include "../Entity/EntityData.h"
#include "../DiceCommonsShared/LogitechLEDDevice.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class LogitechLEDPulseEffectEntityData : public Entity::EntityData {
        DiceCommonsShared::LogitechLEDDevice LogitechLEDDevice; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Color1; // 0x30
        Core::Vec3 Color2; // 0x40
        Float32 Duration; // 0x50
        Boolean Enabled; // 0x54
        char pad_0x55[0xB];
    }; // 0x60
    static_assert(sizeof(LogitechLEDPulseEffectEntityData) == 0x60);
}
#pragma pack(pop)