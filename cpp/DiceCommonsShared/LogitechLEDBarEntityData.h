// Object: LogitechLEDBarEntityData
// ClassId: 2854
// RuntimeId: 36572
// TypeInfo: 0x0000000144DBF6B0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../GameShared/InputDeviceKeys.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class LogitechLEDBarEntityData : public Entity::EntityData {
        Float32 Value; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 BarColor; // 0x30
        Core::Vec3 BackgroundColor; // 0x40
        Array<GameShared::InputDeviceKeys> InputDeviceKeys; // 0x50
        Boolean Enabled; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(LogitechLEDBarEntityData) == 0x60);
}
#pragma pack(pop)