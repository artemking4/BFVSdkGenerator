// Object: LogitechLEDConstantEffectEntityData
// ClassId: 2857
// RuntimeId: 54707
// TypeInfo: 0x0000000144DBF530
#include "../Entity/EntityData.h"
#include "../DiceCommonsShared/LogitechLEDDevice.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class LogitechLEDConstantEffectEntityData : public Entity::EntityData {
        DiceCommonsShared::LogitechLEDDevice LogitechLEDDevice; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Color; // 0x30
        Boolean Enabled; // 0x40
        char pad_0x41[0xF];
    }; // 0x50
    static_assert(sizeof(LogitechLEDConstantEffectEntityData) == 0x50);
}
#pragma pack(pop)